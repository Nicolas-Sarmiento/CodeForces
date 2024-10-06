#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    vector<int> v(n);
    int s = 0; 
    for(auto &i: v){
        cin >> i;
        s += i;
    }    
    vector<int> v2;
    for(auto i: v){
        v2.push_back((i?-1:1));
    }
    int mx_sum = -1, sm = 0;
    for(int i = 0; i < n; i++){
        sm = max(v2[i]+sm, v2[i]);
        mx_sum = max(mx_sum, sm);
    }
    cout << s + mx_sum << '\n';
    return 0;
}