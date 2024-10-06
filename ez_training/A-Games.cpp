#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    int n; cin >> n;
    vector<int> h (n);
    vector<int> v (n);
    map<int, int> m;
    for(int i = 0; i < n; i++){
        cin >> h[i] >> v[i];
        m[v[i]]++;
    }
    int s = 0;
    for(int i = 0; i < n; i++){
        s += m[h[i]];
        s -= v[i] == h[i]? 1: 0;
    }
    cout << s << '\n';
    return 0;
}