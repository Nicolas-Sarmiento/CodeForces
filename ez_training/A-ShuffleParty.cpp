#include<iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t, n, ans; cin >> t;
    while(t--){
        cin >> n;
        ans = 1;
        while(ans <= n){
            ans *= 2;
        }
        cout << ans/2 << '\n';
    }
    return 0;
}