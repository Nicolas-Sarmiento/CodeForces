#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    int t; cin >> t;
    while(t--){
        ll n; cin >> n;
        ll k; cin >> k;
        ll odd = n - (k-1);
        ll even = n - 2*(k-1);
        
        if( odd%2 && odd > 0){
            cout << "YES\n";
            for(ll i = 0; i < k-1; i++){
                cout << "1 ";
            }
            cout << odd << '\n';
        }else if ( !(even%2) && even > 0){
            cout << "YES\n";
            for(ll i = 0; i < k-1; i++){
                cout << "2 ";
            }
            cout << even << '\n';
        }else{
            cout << "NO\n";
        }

    }
    return 0;
}