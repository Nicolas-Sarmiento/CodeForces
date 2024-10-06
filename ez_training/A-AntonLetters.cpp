#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    string s;
    getline(cin, s);
    unordered_set <char> st;
    for(auto i: s){
        if( i == '{' || i == '}' || i == ' ' || i == ',') continue;
        st.emplace(i);
    }
    cout << st.size() << '\n';
    return 0;
}