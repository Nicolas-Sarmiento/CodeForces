#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n, l=200,li = 0, h=0, hi=0, a; cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a;
        if( a > h ){ h = a; hi = i;}
        if( a <= l) { l = a; li = i;}
    }
    int ans = hi + (n - li - 1);
    if ( hi > li) ans --;
    cout << ans << '\n';
    return 0;
}