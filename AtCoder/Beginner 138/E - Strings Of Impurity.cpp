#include<bits/stdc++.h>
using namespace std;

#define ll long long int

int main() {
    string s, t;
    cin >> s >> t;
    ll n = s.size();
    s += s;
    vector<vector<int>> pos(26);
    vector<int> cnt(26, 0);
    for(int i = 0; i < s.size(); i++) {
        cnt[s[i] - 'a']++;
        pos[s[i] - 'a'].push_back(i);
    }
    ll ans = 0, p = 0;
    for(int i = 0; i < t.size(); i++) {
        if(!cnt[t[i] - 'a']) {
            cout << -1;
            return 0;
        }
        p = *lower_bound(pos[t[i] - 'a'].begin(), pos[t[i] - 'a'].end(), p) + 1;
        // cout << p << endl;
        if(p >= n) {
            ans += n;
            p -= n;
        }
    }
    ans += p;
    cout << ans << endl;
}
