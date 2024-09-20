#include<bits/stdc++.h>
using namespace std;
int main(){
    int a;
    set<int> s;
    for(int i = 0; i < 4; i++){
        cin >> a;
        s.emplace(a);
    }
    cout << 4 - s.size() << '\n';
    return 0;
}