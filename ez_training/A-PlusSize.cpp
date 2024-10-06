#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    int t,n, m1,m2, s1,s2; cin >> t;
    while(t--){
        cin >> n;
        vector<int> v (n); for(auto &i: v) cin >> i;
        m1 = 0, m2 = 0, s1 = 0, s2 = 0;
        for(int i = 0; i < n; i++){
            if(i%2){
                m2++;
                s2 = max(s2, v[i]);
            }else{
                m1++;
                s1 = max(s1,v[i]);
            }
        }
        m2 += s2;
        m1 += s1;
        cout << max(m2,m1) << '\n';
    }
}