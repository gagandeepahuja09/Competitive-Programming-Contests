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
#define MAXN 100001

vvi adj;
int par[MAXN][20];
int depth[MAXN];

void buildLCA(int u, int p) {
    depth[u] = depth[p] + 1;
    par[u][0] = p;
    for(int i = 1; i <= 19; i++) {
        par[u][i] = par[par[u][i - 1]][i - 1];
    }
    for(int v : adj[u]) {
        if(v != p) {
            buildLCA(v, u);
        }
    }
}

int lcaLen(int a, int b) {
    if(depth[a] > depth[b])
        swap(a, b);
    int len = 0;
    for(int i = 19; i >= 0; i--) {
        if(depth[par[b][i]] >= depth[a]) {
            b = par[b][i];
            len += (1 << i);
        }
    }
    if(a == b)
        return len;
    for(int i = 19; i >= 0; i--) {
        if(par[a][i] != par[b][i]) {
            a = par[a][i]; 
            b = par[b][i];
            len += (1 << (i + 1));
        }
    }
    return len + 2;
}

signed main() {
    int t = 1;
    // cin >> t;
    while(t--) {
       int n, q;
       cin >> n;
       adj.resize(n + 1);
       for(int i = 0; i < n - 1; i++) {
           int u, v;
           cin >> u >> v;
           adj[u].pb(v);
           adj[v].pb(u);
       }
       buildLCA(1, 0);
       cin >> q;
       while(q--) {
            bool ans = false;
            int a, b, x, y, k;
            cin >> x >> y >> a >> b >> k;
            int with = lcaLen(a, b);
            if(with <= k && with % 2 == k % 2)
                ans = true;
            int op1 = lcaLen(a, x) + 1 + lcaLen(y, b);
            if(op1 <= k && op1 % 2 == k % 2)
                ans = true;
            int op2 = lcaLen(a, y) + 1 + lcaLen(x, b);
            if(op2 <= k && op2 % 2 == k % 2)
                ans = true;
            if(ans) cout << "YES";
            else    cout << "NO";
            cout << endl;
       }
    }
}
