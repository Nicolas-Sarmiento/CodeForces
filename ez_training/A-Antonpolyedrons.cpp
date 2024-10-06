#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    map<string, int> p = { {"Tetrahedron", 4}, {"Cube", 6} , {"Octahedron", 8}, {"Dodecahedron", 12}, {"Icosahedron",20}};
    int n; cin >> n; string s;
    int sm = 0;
    while (n--){
        cin >> s;
        sm += p[s];
    }
    cout << sm << '\n';
    return 0;
}