#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ll n, m, a, b, r; cin >> n >> m >> a >> b;
    if(m > n){
        r = min(n*a, b);
    }else{
        if( (m*a) <= b ){
            r = n*a;
        }else{
            r = (n/m) * b;
            if( n%m ){
                r += min((n%m)*a, b);
            }
        }
    }
    cout << r << '\n';
    return 0;
}