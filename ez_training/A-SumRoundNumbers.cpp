#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >>t;
    string n;
    while(t--){
        ll d = 0, cnt = 0;
        cin >> n;
        ll ln = n.length()-1;
        vector<ll> ans;
        for(ll i = 0; i < n.length(); i++){
            if( n[i] == '0'){  ln--;continue; }
            cnt++;
            ll a = (n[i] - '0') * (pow(10, ln));
            ln--;
            ans.push_back(a);
        }
        cout << cnt << '\n';
        for(auto &i : ans) cout << i << ' ';
        cout << '\n';
        
    }
    return 0;
}