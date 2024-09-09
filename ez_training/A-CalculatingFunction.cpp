#include<iostream>
using namespace std;
typedef long long ll;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ll n; cin >> n;
    if(n%2){
        cout << ((n-1)/2) - n << '\n';
    }else{
        cout << n/2 <<'\n';
    }
    return 0;
}