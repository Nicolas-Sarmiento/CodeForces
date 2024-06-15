#include <iostream>
using namespace std;
int main(){
    int n = 6;
    int index = 6;
    for (size_t i = 0; i < 8; i++){
        index = (index+n-1)%n;
        cout << index;
    }
    
    return 0;
}