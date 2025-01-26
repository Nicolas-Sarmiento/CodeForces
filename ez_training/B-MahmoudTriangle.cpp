#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    ll n; cin >> n;
    vector<ll> v (n);
    for(auto &i : v) cin >> i;
    sort(v.begin(), v.end());
    bool cn = false;
    for( ll i = 0; i < n-2;i++){
        if( (v[i] + v[i+1]) > v[i+2]) cn = true;
    }
    cout << (cn? "YES" : "NO") << '\n';
    return 0;
}