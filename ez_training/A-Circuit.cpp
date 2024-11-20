#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    int t; cin >> t;
    while(t--){
        ll n, s; cin >> n;
        ll ones = 0, mx = 0, mn = 0;
        for(int i = 0; i < 2*n; i++){
            cin >> s; 
            ones += s;
        }
        if( ones > n ){
            ones = 2*n - ones;
        }
        mx = ones;
        if( ones % 2){
            mn = 1;
        }else{
            mn = 0;
        }
        cout << mn << ' ' <<mx << '\n';
    }
    return 0;
}