#include<bits/stdc++.h>
using namespace std;

#define int long long int
#define vi vector<int>
#define pb push_back
#define vvi vector<vi>

vvi adj;

void bfs(vi& du, int u) {
    queue<vi> q;
    q.push({ u, 0 });
    while(!q.empty()) {
        auto f = q.front();
        q.pop();
        int node = f[0], steps = f[1];
        if(du[node] != -1)  continue;
        du[node] = steps;
        for(int v : adj[node]) {
            q.push({ v, steps + 1 });
        }
    }
}

signed main() {
    int n, u, v;
    cin >> n >> u >> v;
    adj.clear();
    adj.resize(n + 1);
    for(int i = 0; i < n - 1; i++) {
        int a, b;
        cin >> a >> b;
        adj[a].pb(b);
        adj[b].pb(a);
    }
    vi du(n + 1, -1), dv(n + 1, -1);
    bfs(du, u);
    bfs(dv, v);
    int mx = 0;
    for(int i = 1; i <= n; i++) {
        if(du[i] > dv[i])   continue;
        // cout << i << " " << dv[i] << endl;
        mx = max(mx, dv[i]);
    }
    cout << mx - 1 << endl;
}
