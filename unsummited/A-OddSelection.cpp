#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    int tt, x, n; cin >> tt;
    while(tt--){
        cin >> n >> x;
        vector<int> v (n); for(auto &i: v) cin >> i;
        int od = 0;
        for(auto i : v){
            if(i % 2) od++;
        }
        if(x%2 && od >= x){
            cout << "Yes\n";
        }else if( !(x%2) && od >= (x-1) && (n - od) > 0){
            cout << "Yes\n";
        }else{
            cout << "No\n";
        }
    }
    return 0;
}