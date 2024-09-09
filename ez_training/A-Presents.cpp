#include<iostream>
using namespace std;
int main(){
    int n, pi; cin >> n;
    int p[n+1];
    for(int i = 1; i <= n; i++){
        cin >> pi;
        p[pi] = i;
    }
    for(int i = 1; i <= n; i++){
        cout << p[i] << ' ';
    }
    cout << '\n';
    return 0;
}