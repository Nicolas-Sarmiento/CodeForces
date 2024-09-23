#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll search(ll n, ll k){
    ll l = 1, r = 1e10, mid = 0, ans = 0, d;
    while( l <= r){
        mid = l + (r-l)/2;
        d = mid / n;
        if( (mid - d) == k && mid % n){ ans = mid; break;}
        if( (mid - d) >= k )  r = mid -1;
        else l = mid + 1;
    }
    return ans;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t;
    while(t--){
        ll n, k; cin >> n >> k;
        cout << search(n,k) << '\n';
    }
    return 0;
}