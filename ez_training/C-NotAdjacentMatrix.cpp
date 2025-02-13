#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    int t; cin >> t;
    while(t--){
        ll n; cin >> n;
        if( n == 2){ cout << -1 << '\n'; continue;}
        ll od = 1, ev = 2;
        for(ll i = 0; i < n; i++){
            for(ll j = 0; j < n; j++){
                if( od <= (n*n)){
                    cout << od << ' ';
                    od +=2;
                }else{
                    cout << ev << ' ';
                    ev += 2;
                }
            }
            cout << '\n';
        }
        
    }
    return 0;
}