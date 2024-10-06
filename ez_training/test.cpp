#include<bits/stdc++.h>
using namespace std;
map<int, int> s;
void primes(int n) {

    while (n % 2 == 0) {
        s[2]++;
        n /= 2;
    }
    for (int i = 3; i * i <= n; i += 2) {
        while (n % i == 0) {
            s[i]++;
            n /= i;
        }
    }

    if (n > 2){
        s[n]++;
    }
}

int main(){
    int n; cin >> n;
    primes(n);
    for(auto it=s.begin();it!=s.end();it++){
        cout << it->first << ' ' << it->second << '\n';
    }
    return 0;
}