#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    int t; cin >> t;
    while(t--){
        ll n; cin >> n;
        vector<ll> a (n);
        vector<ll> b (n);
        for(auto &i : a) cin >> i;
        for(auto &i : b) cin >> i;
        ll ls = 0, diff = 0, ps = 0;
        for(ll i = 0; i < n; i++){
            if( a[i] < b[i] ){
                ls++;
                diff = b[i] - a[i];
                ps = i;
            } 
                
        }
        if( ls > 1) {
            cout << "NO\n";
        }else if( ls == 0){
            cout << "YES\n";
        }else{
            bool cn = true;
            for(ll i = 0; i < n; i++){
                if( i == ps) continue;
                if( (a[i] - diff) < b[i] ) cn = false;
            }
            cout << (cn? "YES":"NO") << '\n';
        }

    }
    return 0;
}