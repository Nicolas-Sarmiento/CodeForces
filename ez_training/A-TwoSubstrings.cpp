#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    string s;
    cin >> s;
    bool ab = false;
    bool ba = false;
    for(ll i = 0; i < s.length()-1; i++){
        if((s[i] == 'A' && s[i+1] =='B') && !ab){
            ab = true;
            i++;
            continue;
        }
        if((s[i] == 'B' && s[i+1] =='A') && !ba){
            ba = true;
            i++;

        }
    }
    if( ab && ba ){ cout << "YES\n";return 0; }
    ab = false;
    ba = false;
    for( ll i = s.length()-1; i > 0; i--){
         if((s[i] == 'A' && s[i-1] =='B') && !ba){
            ba = true;
            i--;
            continue;
        }
        if((s[i] == 'B' && s[i-1] =='A') && !ab){
            ab = true;
            i--;

        }
    }
    cout << ( ab && ba ? "YES": "NO") << '\n';
    return 0;
}