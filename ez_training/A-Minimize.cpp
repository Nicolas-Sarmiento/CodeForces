#include<iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t;
    while(t--){
        int a, b; cin>> a >> b;
        cout << b - a <<'\n';
    }
    return 0;
}