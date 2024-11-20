#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    int t; cin >> t;
    while(t--){
        ll n, m, r, c; cin >> n >> m >> r >> c;
        ll ans = (m - c) + (n - r)*(2*m -1);
        cout << ans << '\n';
    }
    return 0;
}