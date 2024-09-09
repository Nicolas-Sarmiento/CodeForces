#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(){
    ll xc, yc, k; cin >> xc >> yc >> k;
    vector<pair<ll,ll>> v;
    v.push_back({k*xc, k*yc});
    for(ll i = 100000; v.size()< k; i++){
        if(v.size() + 2 <= k){
            v.push_back({-i,0});
            v.push_back({i,0});
            continue;
        }

        v.back().first += i;
        v.push_back({-i,0});
    }
    for(auto &i: v) cout << i.first << ' ' << i.second << '\n';

}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t;
    while(t--){
        solve();
    }
    return 0;
}