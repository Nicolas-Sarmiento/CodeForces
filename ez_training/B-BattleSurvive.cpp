#include<iostream>
#include<vector> 
typedef long long ll;
using namespace std;
int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<ll> v(n); for(auto &i: v) cin >> i;
        ll s = 0;
        for(auto i: v){
            s += i;
        }
        s -= 2 * v[n-2];
        cout << s << '\n';
    }
    return 0;
}