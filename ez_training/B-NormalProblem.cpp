#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    int t; cin >> t;
    while(t--){
        string s; cin >> s;
        for( ll i = s.length()-1; i >= 0; i--){
            if(s[i] == 'q')cout << 'p';
            else if( s[i] == 'p') cout << 'q';
            else cout << s[i];
        }
        cout << '\n';
    }
    return 0;
}