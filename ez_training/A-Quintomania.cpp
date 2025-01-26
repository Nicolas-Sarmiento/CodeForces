#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int> v (n); for( auto &i: v) cin >> i;
        int diff = 0;
        bool cn = 0;
        for(int i = 1; i < n; i++){
            diff = abs( v[i] - v[i-1] );
            if( diff != 5 && diff != 7 ){
                cn = 1;
                break;
            }
        }
        cout << (!cn ? "YES":"NO") << '\n';
    }
    return 0;
}