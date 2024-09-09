#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t;
    while(t--){
        int n, a; cin >> n;
        int arr[n+1] = {};
        for(int i = 0; i < n;i++){
            cin >> a;
            arr[a]++;
        }
        sort(arr, arr +(n+1));
        cout << n - arr[n] << '\n'; 
    }
    return 0;
}