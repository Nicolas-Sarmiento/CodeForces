#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    int t; cin >> t;
    while(t--){
        ll a,b,c; cin >> a >> b >> c;
        ll mn = min(a, min(b,c));
        bool fs = 0, cn = 0;
        if( (b-a) == (c-b)){
            cn = 1;
        }
        ll x;
        x = a + (c-a)/2;
        fs = !(x%b);
        if( (x-a) == (c-x) && fs && x > 0){
            cn = 1;
        }
        x = (b + (b-a));
        fs = !(x%c);
        if( (b-a) == (x-b) && fs && x > 0){
            cn = 1;
        }
        x = (b - (c-b));
        fs = !(x%a);
        if( (b-x) == (c-b) && fs && x > 0){
            cn = 1;
        }
        cout << (cn? "YES": "NO") << '\n';
    }
    return 0;
}