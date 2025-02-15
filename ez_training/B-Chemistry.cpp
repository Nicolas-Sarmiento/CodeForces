#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    int t; cin >> t;
    while(t--){
        ll n, k; cin >> n >> k;
        string s; cin >> s;
        map<char, ll> m;
        for(ll i = 0; i < s.length();i++){
            m[s[i]]++;
        }
        ll odds = 0;
        for(auto it = m.begin(); it != m.end(); it++){
            odds += it->second%2;
        }
        if( (n-k) % 2){
            odds--;
        }
        cout << (k >= odds && !((k-odds) % 2) ? "YES" : "NO" ) << '\n';
    }
    return 0;
}