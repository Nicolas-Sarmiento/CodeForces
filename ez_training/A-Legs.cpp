#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t, cw, ch, n; cin >> t;
    while(t--){
        cin >> n;
        cw = 0; ch = 0;
        while(n>=4){
            n-=4;
            cw++;
        }
        while (n){
            n-=2;
            ch++;
        }
        cout << cw+ch << '\n';
    }
    return 0;
}