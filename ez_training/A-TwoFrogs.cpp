#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    int t; cin >> t;
    while(t--){
        ll n, a, b; cin >> n >> a >> b;
        ll diff = abs(a - b) - 1;
        cout << (diff % 2 ? "YES": "NO") << '\n';
    }
    return 0;
}