#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    int t; cin >> t;
    while(t--){
        ll n; cin >> n;
        ll ax = n;
        set<ll> ans;
        for(ll i = 2; i*i < n; i++){
            if(!(ax % i) && ans.count(i) == 0){
                if(ans.size() == 1 ){
                    if( ans.count(ax/i) == 0){
                        ans.emplace(i);
                        ans.emplace(ax/i);
                    }
                }else{
                    ans.emplace(i);
                    ax /= i;
                } 
            }
            if( ans.size() == 3) break;
        }
        if(ans.size() == 3){
            cout << "YES\n";
            for(auto &i : ans) cout << i <<' ';
            cout << '\n';
        }else{
            cout << "NO\n";
        }
    }
    return 0;
}