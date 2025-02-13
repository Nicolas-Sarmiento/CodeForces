#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    int t; cin >>t;
    while(t--){
        ll n, k, x; cin >> n >> k >> x;
        ll mn = (k*(k+1))/2;
        ll mx = ((n*(n+1)) - ((n-k)*(n-k+1)))/2;
        if( x <= mx && x >= mn){
            cout << "YES";
        }else{
            cout << "NO";
        }
        cout << '\n';
    }
    return 0;
}