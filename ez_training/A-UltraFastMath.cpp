#include<iostream>
using namespace std;
int main(){
    string s1, s2, r;
    cin >> s1 >> s2;
    for(int i = 0; i < s1.length(); i++){
        if( s1[i] != s2[i]) r.push_back('1');
        else r.push_back('0');
    }
    cout << r << '\n';
    return 0;
}