#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define vi vector<int>
#define vvi vector<vi>

signed main() {
    int n, m;
    cin >> n >> m;
    vvi a;
    for(int i = 0; i < n; i++) {
        int x, y, z;
        cin >> x >> y >> z;
        a.push_back({ x, y, z });
    }
    int ans = LLONG_MIN;
    for(int i = 0; i < 8; i++) {
        vi v(n, 0);
        for(int j = 0; j < n; j++) {
            for(int k = 0; k < 3; k++) {
                if(i & (1 << k)) {
                    v[j] += a[j][k];
                }
                else {
                    v[j] -= a[j][k];
                }
            }
        }
        sort(v.begin(), v.end(), greater<int>());
        int curr = 0;
        for(int j = 0; j < m; j++) {
            curr += v[j];
        }
        ans = max(ans, curr);
    }
    cout << ans << endl;
}
