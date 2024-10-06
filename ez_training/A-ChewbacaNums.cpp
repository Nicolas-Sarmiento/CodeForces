#include<iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    string n, ans; cin>> n;
    for(int i = 0; i < n.length(); i++){
        int ni = (n[i] - '0');
        if( ((9 - ni) ==0 && i == 0) || (9 - ni) > ni ) ans.push_back(n[i]);
        else ans.push_back((9-ni) + '0');
    }
    cout << ans << '\n';
    return 0;
}