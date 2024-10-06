#include<bits/stdc++.h>
using namespace std;
int main(){
    char l;
    string s; cin>> l >> s;
    string sa;
    string sr[] = {"qwertyuiop","asdfghjkl;","zxcvbnm,./"};
    for(auto c: s){
        for(int i = 0; i < 3;i++ ){
            auto p = sr[i].find(c);
            if(  p != string::npos){
                if(l == 'R'){
                    p--;
                }else{
                    p++;
                }
                sa.push_back(sr[i][p]);
            }
        }
    }
    cout << sa << '\n';
    return 0;
}