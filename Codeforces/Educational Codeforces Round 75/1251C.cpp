#include<bits/stdc++.h>
using namespace std;

#define ll long long int

int main() {
    int t;
    cin >> t;
    while(t--) {
        string s;
        cin >> s;
        string odd, even;
        for(int i = 0; i < s.size(); i++) {
            if((s[i] - '0') % 2 == 0)
                even += s[i];
            else
                odd += s[i];
        }
        string ans;
        int i = 0, j = 0;
        while(i < odd.size() && j < even.size()) {
            if(odd[i] < even[j])
                ans += odd[i++];
            else
                ans += even[j++];
        }
        while(i < odd.size())
            ans += odd[i++];
        while(j < even.size())
            ans += even[j++];
        cout << ans << endl;    
    }
}
