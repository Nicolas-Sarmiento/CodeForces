#include<bits/stdc++.h>
using namespace std;
unordered_map<int,int> S;
int log3(int a)
{
    return log2(a) / log2(3);
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t;
    while(t--){
        int l, r;
        long long st = 0;
        cin >> l >> r;
        int times = log3(l) + 1;
        long long th = 3*(times);
        for(int i = l; i <= r; i++){
            if (th <= i){
                th *= 3;
                times++;
                cout << th << ' ' << i << '\n';
            }
            st += times;
            if( i == l ){
                st *= 2;
            }
        }
        cout << st << '\n';
    }
    return 0;
}