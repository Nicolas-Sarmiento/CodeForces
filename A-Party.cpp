#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    ll n, a; cin >> n;
    map<ll, vector<ll>> m;
    for(ll i = 1; i <= n; i++){
        cin >> a;
        if(a == -1) continue;
        m[a].push_back(i);
    }
    stack<ll> s;
    ll mx = 0;
    s.push(1);

    return 0;
}