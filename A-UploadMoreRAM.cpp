#include <iostream>
using namespace std;
int main(){
    int t, n,k; cin >> t;
    while(t--){
        cin >> n >> k;
        cout << n + ((k-1)*(n-1)) << '\n';
    }
    return 0;
}