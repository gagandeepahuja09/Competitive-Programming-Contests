#include<bits/stdc++.h>
using namespace std;

#define int long long int

signed main() {
    int n, d, a;
    cin >> n >> d >> a;
    vector<vector<int>> v;
    vector<int> c(n + 2, 0);
    for(int i = 0; i < n; i++) {
        int x, y;
        cin >> x >> y;
        v.push_back({ x, y });
    }
    sort(v.begin(), v.end());
    int j = 0, ans = 0;
    for(int i = 0; i < n; i++) {
        while(j < n && v[j][0] - v[i][0] <= 2 * d)
            j++;
        int need = (v[i][1] - c[i] * a + a - 1) / (a);
        need = max(need, 0ll);
        ans += need;
        c[i] += need;
        c[j] -= need;
        c[i + 1] += c[i];
    }
    cout << ans;
}
