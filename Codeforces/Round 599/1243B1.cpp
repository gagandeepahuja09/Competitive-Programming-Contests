#include <bits/stdc++.h>
using namespace std;
 
#define ll long long int
 
int main() {
    ll t;
    cin >> t;
    while(t--) {
        ll n;
        cin >> n;
        string s, t;
        cin >> s >> t;
        vector<int> cnt1(26, 0);
        vector<int> cnt2(26, 0);
        for(int i = 0; i < n; i++) {
            if(s[i] != t[i]) {
                cnt1[s[i] - 'a']++;
                cnt2[t[i] - 'a']++;
            }
        }
        int c1 = 0, c2 = 0, x = 0, y = 0;
        for(int i = 0; i < 26; i++) {
            if(cnt1[i])
                c1 += cnt1[i], x++;
            if(cnt2[i])
                c2 += cnt2[i], y++;
        }
        if(c1 == 2 && c2 == 2 && x == 1 && y == 1)
            cout << "Yes";
        else
            cout << "No";
        cout << endl;    
    }
	return 0;
}
