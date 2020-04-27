#include <bits/stdc++.h>
using namespace std;

#define int long long int

int lb(vector<int>& v, int t) {
    int ans = -1, low = 0, high = v.size() - 1;
    while(low <= high) {
        int mid = low + (high - low) / 2;
        if(v[mid] >= t) {
            ans = mid;
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }
    }
    if(ans != -1)
        return v[ans];
    return ans;
}

signed main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<pair<int, int>> a(n);
        map<int, vector<int>> mp;
        for(int i = 0; i < n; i++) {
            cin >> a[i].first;
            a[i].second = i;
            mp[a[i].first].push_back(i);
        }
        sort(a.begin(), a.end());
        int ans = 1, pos = lb(mp[a[0].first], 0) + 1;
        for(int i = 1; i < n; i++) {
            if(a[i].first == a[i - 1].first)
                continue;
            int p = lb(mp[a[i].first], pos);
            if(p == -1) {
                ans++;
                p = lb(mp[a[i].first], 0);
            }
            pos = p + 1;
        }
        cout << ans << endl;
    }
}
