#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    int t; cin >> t;
    while(t--){
        ll k, a; cin >> k; 
        unordered_map<ll, ll> m; 
        vector<ll> v;
        for(ll i = 0; i < k ; i++){
            cin >> a;
            v.push_back(a);
            m[a]++;
        }
        ll n = k-2, r = 0, c = 0;
        for( ll i = 0; i < k; i++){
            if(n % v[i]) continue;
            if( m.find( n/v[i]) != m.end()){
                r = n/v[i];
                c = v[i];
                if( r == c ){
                    if( m[r] > 1) break;
                    else{ r = 0; c = 0;}
                }else{ 
                    break;
                }
            }
        }
        cout << r <<' ' << c << '\n';
    }
    return 0;
}