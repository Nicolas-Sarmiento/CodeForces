#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    ll n, m; cin >> n >> m;
    vector<ll> v (n);
    vector<ll> t (n);
    for(auto &i : v) cin >> i;
    for(ll i = 0; i < n; i++){
        if(v[i] <= m) t[i] = 1;
        else{
            t[i] = v[i]/m + (v[i]%m?1:0);
        }
    }
    ll mx = 0, mxi = 0;
    for(ll i = n-1; i >= 0; i--){
        if( t[i] > mx){
            mx = t[i];
            mxi = i;
        }
    }
    cout << mxi+1 << '\n';
    return 0;
}