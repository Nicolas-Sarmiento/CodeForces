#include<iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(0);
    int n, p, q, s=0; cin >>n;
    while(n--){
        cin >> p >> q;
        if(q - p >= 2) s++;
    }
    cout << s <<'\n';
    return 0;
}