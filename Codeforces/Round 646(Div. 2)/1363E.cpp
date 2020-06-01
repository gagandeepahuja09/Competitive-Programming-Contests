#include <bits/stdc++.h>
using namespace std;
 
#define int long long int
#define vi vector<int>
#define vvi vector<vi>
#define read(a)  for(int i = 0; i < n; i++) cin >> a[i];
#define print(a)  for(int i = 0; i < n; i++) cout << a[i] << " ";
#define pb push_back
#define pql priority_queue<int>
#define pqs priority_queue<int, vi, greater<int>>
#define pqlv priority_queue<vi>
#define pqsv priority_queue<vi, vvi, greater<vi>>
#define endl '\n'
#define N 200005

int a[N], b[N], c[N], mina[N];
vvi adj;
int ans = 0;
 
vi dfs(int u, int p = -1) {
    vi bad(2, 0);
    if(b[u] != c[u]) {
        bad[b[u]]++;
    }
    for(int v : adj[u]) {
        if(v != p) {
            mina[v] = min(mina[v], mina[u]);
            vi curr = dfs(v, u);
            bad[0] += curr[0];
            bad[1] += curr[1];
        }
    }
    int mn = min(bad[0], bad[1]);
    ans += (mn * 2 * mina[u]);
    bad[0] -= mn;
    bad[1] -= mn;
    return bad;
}
 
signed main() {
    ios::sync_with_stdio(false); 
    cin.tie(0); 
    cout.tie(0);
    int t = 1;
    // cin >> t;
    while(t--) {
        int n;
        cin >> n;
        adj.clear();
        adj.resize(n + 1);
        for(int i = 1; i <= n; i++) {
            cin >> a[i] >> b[i] >> c[i];
            mina[i] = a[i];    
        }
        for(int i = 0; i < n - 1; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].pb(v);
            adj[v].pb(u);
        }
        ans = 0;
        vi p = dfs(1);
        if(p[0] != p[1])
            cout << -1 << endl;
        else    
            cout << ans << endl;
    }
	return 0;
}
