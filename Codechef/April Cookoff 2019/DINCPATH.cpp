#include <bits/stdc++.h>
using namespace std;

#define int long long
#define N 100001

int n, m;
int a[N];
map<int, int> dp[N];
vector<int> adj[N];

int dfs(int id, int pre) {
    if(dp[id].find(pre) != dp[id].end())
        return dp[id][pre];
    dp[id][pre] = 0;
    for(auto i : adj[id])
        if((a[i] - a[id]) > pre)
            dp[id][pre] = max(dp[id][pre], dfs(i, a[i] - a[id]));
    return ++dp[id][pre];
}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while(t--) {
        cin >> n >> m;
        for(int i = 1; i <= n; i++)
            cin >> a[i];
        for(int i = 0; i < m; i++) {
            int u, v;
            cin >> u >> v;
            if(a[v] > a[u])
                adj[u].push_back(v);
            else if(a[u] > a[v])
                adj[v].push_back(u);
        }
        int ans = 1;
        for(int i = 1; i <= n; i++) {
            for(auto j : adj[i])
                ans = max(ans, dfs(j, a[j] - a[i]) + 1);
        }
        cout << ans << endl;
        for(int i = 1; i <= n; i++)
            adj[i].clear(), dp[i].clear();
    }
	return 0;
}
