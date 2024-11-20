#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    string abc = "abcdefghijklmnopqrstuvwxyz";
    int t, n, a, b; cin >> t;
    while(t--){
        cin >> n >> a >> b;
        string sb = abc.substr(0, b);
        string r;
        int i = 0;
        while(n--){
            r.push_back(sb[i%sb.length()]);
            i++;
        }
        cout << r << '\n';
    }
    return 0;
}