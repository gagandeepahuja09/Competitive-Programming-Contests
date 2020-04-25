#include<bits/stdc++.h>
using namespace std;

#define int long long int
int const M = 1e9 + 7, N = 2e5 + 1;

int a[N];

signed main() {
    int n, k, ans = 0;
    map<int, vector<int>> mp;
    cin >> n >> k;
    int sum = 0;
    mp[0ll].push_back(0ll);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        sum += a[i];
        // k = 8
        // i = 11, mp[val] => { 1, 2, 6, 8, 9 }
        // we will only check within range of k because
        // (sj - si) % k = (j - i) => (sj - j) % k = (si - i) % k 
        // hence we can use prefix sums + map
        // (sj - si) % k = (j - i) means that j - i should be within k - 1
        // for that we can store mp[(si - i) % k].indices and then binary search to find the
        // lower_bound since the indices will be sorted
        int val = (sum - (i + 1)) % k;
        int pos = lower_bound(mp[val].begin(), mp[val].end(), max(i - k + 2, 0ll)) - mp[val].begin();
        int cnt = (mp[val].size() - pos);
        ans += cnt;
        mp[val].push_back(i + 1);
    }
    cout << ans << endl;
}
