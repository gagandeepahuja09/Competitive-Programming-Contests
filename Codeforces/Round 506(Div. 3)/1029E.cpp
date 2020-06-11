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
#define MOD 1000000007

vvi adj;
int par[N], depth[N];
vi v;

void dfs(int u = 1, int p = -1, int d = 0) {
    par[u] = p;
    depth[u] = d;
    for(int x : adj[u]) {
        if(x == p)  continue;
        dfs(x, u, d + 1);
    }
    if(d > 2) {
        v.pb(u);
    }
}

signed main() {
    int n;
    cin >> n;
    adj.clear();
    adj.resize(n + 1);
    for(int i = 0; i < n - 1; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].pb(v);
        adj[v].pb(u);
    }
    vi used(n + 1, 0);
    dfs();
    int cnt = 0;
    for(int i = 0; i < v.size(); i++) {
        if(!used[v[i]]) {
            int p = par[v[i]];
            used[p] = 1;
            for(int x : adj[p]) {
                used[x] = 1;
            }
            cnt++;
        }
    }
    cout << cnt << endl;
}
