#include<bits/stdc++.h>
using namespace std;
int main(){
    string n; cin>> n;
    int fn = 0;
    if( n[0] != '1'){
        cout << "NO\n";
        return 0;
    }
    for( auto &i : n){
        if( i == '1'){
            fn = 0;
        }else if ( i == '4'){
            fn++;
            if( fn > 2 ){
                cout << "NO\n";
                return 0;
            }
        }else{
            cout << "NO\n";
            return 0;
        }
    }
    cout << "YES\n";
    return 0;
}