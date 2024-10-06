#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    int n; cin >> n;
    vector<int> v (n); for(auto &i: v) cin >> i;
    int mx = 0, sm1 = 0, sm = 0, sm2 = 0;
    for(int i = 0; i < n;i++){
        sm1 += v[i] ? 1:0;
        sm = sm1;
        for(int j = i; j < n; j++){
            sm += !v[j]? 1: 0;
            for(int k = j+1; k < n; k++){
                sm2 += v[k] ? 1:0;
            }
            mx = max(mx, sm+sm2);
            sm2 = 0;
        }
    }
    bool az = true;
    for(auto i : v) if( i == 0) az = false;
    if(az) mx--;
    cout << mx << '\n';
    return 0;
}