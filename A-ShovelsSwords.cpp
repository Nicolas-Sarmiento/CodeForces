#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    int t; cin >> t;
    while(t--){
        ll a, b; cin >> a >> b;
        cout << min({a, b, (a+b)/3}) << '\n';
    }
    return 0;   
}