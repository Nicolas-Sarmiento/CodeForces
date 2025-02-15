#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    ll n; cin >> n;
    vector<ll> v (n);
    for(auto &i : v) cin >> i;
    ll p = 0, c = 0;
    for(auto &i : v){
        if( i > 0) p+=i;
        else{
            c += ll(p <= 0);
            p = max( p-1, 0ll);
        }
    }
    cout << c <<'\n';
    return 0;
}