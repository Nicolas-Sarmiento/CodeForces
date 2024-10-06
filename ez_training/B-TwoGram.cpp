#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    int n; cin >> n;
    string s, a; cin >> s;
    unordered_map<string, int> m;
    for(int i = 0; i < n-1; i++){
        a.push_back(s[i]); a.push_back(s[i+1]);
        if( m.find(a) != m.end()){
            m[a]++;
        }else{
            m[a] = 1;
        }
        a = "";
    }
    int mx = 0;
    for(auto it = m.begin(); it!=m.end();it++){
        if( it->second > mx){ mx = it->second; a = it->first;}
    }
    cout << a << '\n';
    return 0;
}