#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);cin.tie(0);
    int tt; cin >> tt;
    while(tt--){
        int n; cin >> n;
        vector<ll> nums (n);
        for(auto &i: nums) cin >> i;
        unordered_map<ll, ll> mp; 
        mp[0] = -1;
        int pre_sm = 0;      
        int last_index = -1;     
        int count = 0;           

        for (int i = 0; i < nums.size(); i++) {
            pre_sm += nums[i];  
            if (mp.find(pre_sm) != mp.end()) {
                int prev_index = mp[pre_sm];
                if (prev_index >= last_index) {
                    count++;
                    last_index = i;  
                }
            }
            mp[pre_sm] = i;
        }
        cout << count <<'\n';
    }
    return 0;
}
