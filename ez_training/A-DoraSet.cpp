#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t, l, r, len, odd; cin >> t;
    while(t--){
        cin >> l >> r;
        len = r-l+1;
        odd = len/2 + (len%2 && l%2? 1: 0);
        cout << odd/2 <<'\n';
    }
    return 0;
}