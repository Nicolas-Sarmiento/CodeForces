#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    int t; cin >> t;
    while(t--){
        ll n; cin >> n;
        vector<ll> v (n);
        for(auto &i : v ) cin >> i;
        ll odds = 0;
        for(auto &i : v){
            odds += i%2? 1: 0;
        }
        if( n == odds){
            odds--;
        }else odds++;
        cout << odds << '\n';
    }
    return 0;
}