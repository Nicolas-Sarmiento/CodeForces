#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve(){
    ll x, y, k; cin >> x >> y >> k;
    ll mx = (x+k-1)/k, my = (y+k-1)/k;
    if(mx> my){
        cout << (2*mx)-1 << '\n';
    }else{
        cout << (2*my) << '\n';
    }
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