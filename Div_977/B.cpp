#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    int t; cin >> t;
    while(t--){
       ll n, x, a; cin >> n >> x;
       vector<ll> d; 
       set<ll> s;
       for(int i = 0; i < n; i++){
            cin >> a;
            if(s.count(a)) d.push_back(a);
            s.insert(a);
       } 
       sort(d.begin(), d.end());
       ll mn = 0;
       ll nt;
       int j = 0;
       for(auto &i : s){
            if( i == mn) mn++;
            else{
                if( j >= d.size()) continue;
                if( d[j] > mn) continue;
                nt = mn - d[j];
                if( !(nt%x) ){
                    mn++;
                    j++;
                    if(i == mn) mn++;
                }
            }
       }
       for(int i = j; i < d.size(); i++){
            if( d[i] > mn) continue;
            nt = mn - d[i];
            if( !(nt%x) ) mn++;
       }
       cout << mn << '\n';
    }
    return 0;
}
