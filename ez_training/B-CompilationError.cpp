#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n; cin >> n;
    vector<ll> sm (3, 0);
    ll a;
    for(ll i = 0; i < 3; i++){
        for(ll j = 0; j < n-i; j++){
            cin >> a;
            sm[i] += a;
        }
    }
    cout << sm[0] - sm[1] <<'\n'<< sm[1] - sm[2] << '\n';
    return 0;
}