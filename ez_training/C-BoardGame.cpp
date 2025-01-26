#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll mx=500007;
vector<ll> dp (mx, 0);

void sdp(){
    ll k = 1;
    for(ll i = 3; i < mx; i+=2 ){
        dp[i] = dp[i-2] + (k * ((i*2) + ((i-2)*2)));
        k++;
    }
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    sdp();
    int t; cin >>t;
    ll n;
    while(t--){
        cin >> n;
        cout << dp[n] << '\n';
    }
    return 0;
}