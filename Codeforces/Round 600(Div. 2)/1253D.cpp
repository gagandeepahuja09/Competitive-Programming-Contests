#include <bits/stdc++.h>
using namespace std;
 
#define int long long int
#define vi vector<int>
#define vvi vector<vi>
#define read(a)  for(int i = 0; i < n; i++) cin >> a[i];
#define print(a)  for(int i = 0; i < n; i++) cout << a[i] << " ";
#define pb push_back
#define ins insert
#define pql priority_queue<int>
#define pqs priority_queue<int, vi, greater<int>>
#define pqlv priority_queue<vi>
#define pqsv priority_queue<vi, vvi, greater<vi>>
#define endl '\n'
#define MOD 998244353
#define all(a)  (a.begin(), a.end())

vvi g;
vi vis;
vvi pairs;

void dfs(int i, int& mn, int& mx) {
    if(vis[i])  
        return;
    vis[i] = 1;
    mn = min(mn, i);
    mx = max(mx, i);
    for(auto v : g[i]) {
        dfs(v, mn, mx);
    }
}

signed main() {
    int t = 1;
    // cin >> t;
    while(t--) {
        int n, m;
        cin >> n >> m;
        g.assign(n + 1, {});
        vis.assign(n + 1, 0);
        for(int i = 0; i < m; i++) {
            int u, v;
            cin >> u >> v;
            g[u].pb(v);
            g[v].pb(u);
        }
        for(int i = 1; i <= n; i++) {
            if(!vis[i]) {
                int mn = i, mx = i;
                dfs(i, mn, mx);
                pairs.pb({ mn, mx });
            }
        }
        int curr = 0, ans = 0;
        for(auto i : pairs) {
            if(i[0] <= curr) {
                ans++;
            }
            curr = max(curr, i[1]);
        }
        cout << ans << endl;
    }
}
 
