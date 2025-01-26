#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ll a, b, c; cin >> a >> b >> c;
    cout << max(a, max(b,c)) - min(a, min(b, c));
    return 0;
}