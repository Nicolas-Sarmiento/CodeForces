#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    int t; cin >> t;
    string s;
    while(t--){
        cin >> s;
        ll o = 0, z = 0, g = 0;
        for( auto &i : s ){
            if( i == '1') o++;
            else z++;
        }
        g = min(o, z);
        cout << (g%2?"DA":"NET") << '\n';
    }

    return 0;
}