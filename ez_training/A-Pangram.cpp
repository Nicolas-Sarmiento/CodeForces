#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    set<char> s;
    int n; cin >> n;
    string st; cin >> st;
    for(auto &i: st){
        s.insert(tolower(i));
    }
    cout << (s.size() == 26? "YES": "NO") << '\n';
    return 0;
}