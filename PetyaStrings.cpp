#include <iostream>
#include <string>
using namespace std;
int main(){
    std::string s1,s2;
    cin >> s1 >> s2;
    for (size_t i = 0; i < s1.length(); i++)
    {
        s1[i] = tolower(s1[i]);
        s2[i] = tolower(s2[i]);
    }
    
    if (s1 > s2)
    {
        cout << 1;
    }
    else if (s1 == s2)
    {
        cout << 0;
    }
    else{
        cout << -1;
    }
    

    return 0;
}