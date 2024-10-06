#include<iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    int n, m; cin >> n >> m;
    if(m > n) cout << -1 <<'\n';
    else{
        int mid = (n/2) + (n%2? 1: 0);
        for(int i = mid; i <= (mid+10);i++){
            if(!(i % m)){
                cout << i << '\n';
                break;
            }
        }
    }
    return 0;
}