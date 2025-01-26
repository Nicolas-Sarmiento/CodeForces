#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t;
    ll a, b, c;
    while(t--){
        cin >> a >> b;
        if( b == 1){
            cout << "NO\n";
            continue;
        }
        if( a == b || (a%b == 0)){
            ll tmp = a;
            a = a * b;
            b = tmp;
            c = a+b;
        }else{
            c = a + b;
            b *=a;
            c *=a;
            a *=a;
        }
        
        cout << "YES\n" << a << ' ' << b << ' ' << c << '\n';
    }
    return 0;
}