#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    int t; cin >> t;
    while(t--){
        ll n, a, sm = 0; cin >> n;
        for(ll i = 0; i < n; i++){
            cin >> a;
            sm += a;
        }
        ll sq = (ll) sqrt(sm);
        if( (sq*sq) == sm) {
            cout << "YES\n";
        }else{
            cout << "NO\n";
        }
    }
    return 0;
}