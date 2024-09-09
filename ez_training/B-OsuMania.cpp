#include<iostream>
#include<vector>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<string> v(n);
        for(auto &i: v) cin >> i;
        for(int i = v.size()-1; i >= 0; i--){
            for(int j = 0; j < 4; j++){
                if(v[i][j] == '#'){
                    cout << j+1 << ' ';
                }
            }
        }
        cout << '\n';
    }
    return 0;
}