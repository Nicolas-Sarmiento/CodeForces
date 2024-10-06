#include<iostream>
using namespace std;
typedef long long ll;
int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    ll n; cin >> n;
    ll cnt = 0;
    int b [] = {100,20,10, 5,1};
    for( auto i : b){
        cnt += n / i;
        n -= (n/i) * i;
    }
    
    cout << cnt << '\n';
    return 0;
}