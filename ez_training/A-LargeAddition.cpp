#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t;
    string n;
    bool lrg;
    while(t--){
        cin >> n;
        lrg = (n[0] < '2') && (n[n.length()-1] != '9');
        for(int i = 1; i < n.length()-1; i++){
            if( n[i] == '0') lrg = false;
        }
        cout << (lrg?"YES":"NO") <<'\n';
    }
    return 0;
}