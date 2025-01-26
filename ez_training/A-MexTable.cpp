#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t;
    ll n, m;
    while(t--){
        cin >> n >> m;
        cout << max(n, m) + 1 << '\n';
    }
    return 0;
}