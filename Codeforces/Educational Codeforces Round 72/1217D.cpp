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

bool cycle;

vector<vvi> g;
vi col, res;

void dfs(int u) {
    col[u] = 1;
    for(vi p : g[u]) {
        int v = p[0], idx = p[1];
        if(col[v] == 0) {
            dfs(v);
            res[idx] = 1;
        }
        else if(col[v] == 2) {
            res[idx] = 1;
        }
        else {
            res[idx] = 2;
            cycle = true;
        }
    }
    col[u] = 2;
}

signed main() {
    int t = 1;
    // cin >> t;
    while(t--) {
        cycle = false;
        int n, m;
        cin >> n >> m;
        g.resize(n + 1); col.assign(n + 1, 0); res.assign(m, 1);
        for(int i = 0; i < m; i++) {
            int x, y;
            cin >> x >> y;
            g[x].pb({ y, i });
        }
        for(int i = 1; i <= n; i++)
            if(col[i] == 0)
                dfs(i);
        if(cycle) cout << 2 << endl;
        else    cout << 1 << endl;
        for(int i = 0; i < m; i++) {
            cout << res[i] << " ";
        }
    }
	return 0;
}
