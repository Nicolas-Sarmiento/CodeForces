#include<iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        cout << (n+1)/2 - 1 << '\n';
    }
    return 0;
}