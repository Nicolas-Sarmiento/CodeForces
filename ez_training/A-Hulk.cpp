#include<iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    int n; cin >> n;
    for(int i = 1; i <= n-1; i++){
        if( i%2 ){
            cout << "I hate that ";
        }else{
            cout << "I love that ";
        }
    }
    cout << (n%2? "I hate it": "I love it") << '\n';
    return 0;
}