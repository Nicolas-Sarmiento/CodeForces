#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout << fixed <<setprecision(9);
    double n; cin >> n;
    double p, pi;
    p = 0;
    for(int i = 0; i < n; i++){
        cin >> pi;
        p += pi/100;
    }
    p /= n;
    cout << p*100 <<'\n';

    return 0;
}