#include<bits/stdc++.h>
using namespace std;

#define int long long int
#define vi vector<int>
#define vvi vector<vi>
#define pb push_back

const int MOD = 1e9 + 7;

int power(int x, int y) {
    if(y == 0)  return 1ll;
    if(y % 2)   return (x * power(x, y - 1)) % MOD;
    int f = power(x, y / 2);
    return (f * f) % MOD;
}

signed main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        string ret, temp;
        for(int i = 0; i < s.size(); i++) {
            int j = i;
            // cout << j << endl;
            if(s[i] == '0') { 
                temp += s[i]; 
                continue;
            }
            string curr;
            int f = 0;
            while(j < s.size() && s[j] == '1')  {
                f++;
                curr += s[j];
                j++;
            }
            if(j == s.size()) {
                temp += curr;
                break;
            }
            if(f) {
                while(j < s.size() && s[j] == '0')  j++;
                temp += "x";
            }
            else {
                temp += curr;
            }
            i = j - 1;
        }
        // cout << temp << endl;
        string ans;
        for(int i = 0; i < temp.size(); i++) {
            if(temp[i] != 'x') ans += temp[i];
            else {
                while(i < temp.size() && temp[i] == 'x')  i++;
                ans += '0';
                if(i == temp.size())   break;
                i--;
            }
        }
        cout << ans << endl;
    }
}
