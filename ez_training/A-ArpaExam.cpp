#include<iostream>
using namespace std;
typedef long long ll;
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    int r[] = {6,8,4,2};
    ll n; cin >> n;
    cout << (n != 0?r[n%4]: 1) << '\n';
    return 0;
}