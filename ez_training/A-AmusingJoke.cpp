#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    string s1, s2, s3;cin >> s1>> s2>>s3;
    string r = s1+s2;
    sort(r.begin(), r.end());
    sort(s3.begin(), s3.end());
    if( r.length() != s3.length()){
        cout << "NO\n";
        return 0;
    }
    bool c = true;
    for(int i = 0; i < r.length();i++){
        if(r[i] != s3[i]) c = false;
    }
    cout << (c? "YES":"NO") << '\n';
    return 0;
}