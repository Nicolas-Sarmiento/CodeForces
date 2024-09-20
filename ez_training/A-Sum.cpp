#include<iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t, a, b, c; cin >> t;
    while(t--){
        cin >> a >> b >> c;
        cout << ( a == (b+c) || b  == (c+a) || c == (a+b) ? "YES":"NO") << '\n';
    }
    return 0;
}