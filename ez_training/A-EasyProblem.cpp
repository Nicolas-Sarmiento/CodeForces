#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    int t; cin >> t;
    while(t--){
        ll n; cin >> n;
        ll cnt = 0;
        for( ll a = 1; a < n; a++){
            for( ll b = 1; b < n; b++){
                if((a+b) == n) cnt++;
            }
        }
        cout << cnt << '\n';
    }
    return 0;
}