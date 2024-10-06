#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<ll> v ( n ); for(auto &i: v) cin >> i;
        ll cnt = 0;
        map<ll, ll> m;
        for(ll i = n-1; i >= 0; i--){
            
            if( m.find(v[i] - i) != m.end()){
                cnt += m[v[i] - i]; 
                m[v[i] - i]++;
            }
            else m[v[i] - i] = 1;
        }
        cout << cnt << '\n';
    }
    return 0;
}