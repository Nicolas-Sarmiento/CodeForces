#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    int t; cin >> t;
    while(t--){
        ll m, a , b, c; cin >> m >> a >> b >> c;
        ll sm = min(a,m) + min(b, m);
        ll sb = max(m-a, 0ll) + max(m-b,0ll);
        sm += min(c, sb);
        cout << sm << '\n';
    }
    return 0;   
}