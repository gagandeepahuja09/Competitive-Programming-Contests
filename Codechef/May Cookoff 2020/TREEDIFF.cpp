#include <bits/stdc++.h>
using namespace std;
 
#define int long long int
#define vi vector<int>
#define vvi vector<vi>
#define pb push_back
#define pql priority_queue<int>
#define pqs priority_queue<int, vi, greater<int>>
#define pqlv priority_queue<vi>
#define pqsv priority_queue<vi, vvi, greater<vi>>
#define endl '\n'
#define N 300002

vvi adj;
vi a, parent, depth;

void dfs(int u, int d, int p) {
    parent[u] = p;
    depth[u] = d;
    for(int& i : adj[u]) {
        if(i != p)
            dfs(i, d + 1, u);
    }
}

int solve(int u, int v) {
    vi freq(101, 0);
    while(u != v) {
        if(depth[u] > depth[v]) {
            freq[a[u]]++;
            if(freq[a[u]] > 1) {
                return 0;
            }
            u = parent[u];
        }
        else {
            freq[a[v]]++;
            if(freq[a[v]] > 1){
                return 0;
            }
            v = parent[v];
        }
    }
    freq[a[u]]++;
    if(freq[a[u]] > 1)
        return 0;
    int prev = -102, mn = -prev;
    for(int i = 1; i <= 100; i++) {
        if(freq[i] > 0) {
            mn = min(mn, i - prev);
            prev = i;
        }
    }
    return mn;
}
 
signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    cin >> t;
    while(t--) {
        int n, q;
        cin >> n >> q;
        a.resize(n + 1);
        adj.resize(n + 1);
        parent.assign(n + 1, -1);
        depth.assign(n + 1, 0);
        for(int i = 1; i <= n; i++)
            cin >> a[i];
        for(int i = 0; i < n - 1; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].pb(v);
            adj[v].pb(u);
        }
        dfs(1, 0, -1);
        while(q--) {
            int u, v;
            cin >> u >> v;
            cout << solve(u, v) << endl;
        }
    }
	return 0;
}
