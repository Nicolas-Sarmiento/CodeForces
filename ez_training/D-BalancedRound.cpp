#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    int t; cin >> t;
    while(t--){
        ll n, k; cin >> n >> k;
        vector<ll> v (n);
        for(auto &i: v) cin >> i;
        sort(v.begin(), v.end());
        vector<ll> a;
        a.push_back(v[0]);
        ll mx = 0;
        for(ll i = 1; i < n; i++){
            if((v[i] - v[i-1]) > k){
                mx = max(mx, (ll)a.size());
                a.clear();
                a.push_back(v[i]);
                continue;
            }
            a.push_back(v[i]);
        }
        mx = max(mx, (ll)a.size());
        cout << n - mx << '\n';
    }
    return 0;
}