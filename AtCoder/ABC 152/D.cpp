#include<bits/stdc++.h>
using namespace std;

#define int long long int
#define vi vector<int>
#define vvi vector<vi>
#define pb push_back

signed main() {
    int n;
    cin >> n;
    map<vi, int> mp;
    int ans = 0;
    for(int i = 1; i <= n; i++) {
        int val = i;
        vi v;
        while(val) {
            v.pb(val % 10);
            val /= 10;
        }
        if(v[0] == v.back())    ans++;
        mp[{ v[0], v.back() }]++;
        // cout << mp[{ v[0], v.back() }] << endl;
    }
    for(auto& i : mp) {
        int x = i.first[0], y = i.first[1], val = i.second;
        int other = mp[{ y, x }];
        if(x == y) {
            ans += (val * (val - 1));
        }
        else {
            ans += (val * other);
        }
    }
    cout << ans;
}
