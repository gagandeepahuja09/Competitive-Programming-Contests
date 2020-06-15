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
// #define endl '\n'
#define N 200005
#define MOD 1000000007

vvi adj;

signed main() {
    int t = 1;
    // cin >> t;
    while(t--) {
        int n, m;
        cin >> n >> m;
        adj.clear();
        adj.resize(n + 1);
        while(m--) {
            int a, b;
            cin >> a >> b;
            adj[a].pb(b);
            adj[b].pb(a); 
        }
        queue<vi> q;
        vi dist(n + 1, -1);
        vi par(n + 1, -1);
        q.push({ 1, 0 });
        while(!q.empty()) {
            auto f = q.front();
            q.pop();
            int u = f[0], d = f[1];
            for(int v : adj[u]) {
                // cout << v << " " << u << endl;
                if(dist[v] == -1) {
                    par[v] = u;
                    q.push({ v, d + 1 });
                    dist[v] = d + 1;
                }
            }
        }
        bool ans = true;
        for(int i = 2; i <= n; i++) {
            if(dist[i] == -1)   ans = false;
        }
        ans ? cout << "Yes" : cout << "No";
        cout << endl;
        for(int i = 2; i <= n; i++) {
            cout << par[i] << endl;
        }
    }
} 
