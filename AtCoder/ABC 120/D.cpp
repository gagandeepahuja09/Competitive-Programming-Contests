#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define vi vector<int>
#define vvi vector<vi>
#define pb push_back
#define N 100005

int n, m;
int par[N], sz[N];

int find(int u) {
    if(par[u] == -1)    return u;
    return par[u] = find(par[u]); 
}

signed main() {
    cin >> n >> m;
    vi a(m), b(m);
    for(int i = 0; i < m; i++)  cin >> a[i] >> b[i];
    int ans = (n * (n - 1)) / 2;
    memset(par, -1, sizeof par);
    memset(sz, 0, sizeof sz);
    vi ret;
    for(int i = 1; i <= n; i++) sz[i]++;
    for(int i = m - 1; i >= 0; i--) {
        ret.pb(ans);
        int u = find(a[i]), v = find(b[i]);
        if(u != v) {
            par[u] = v;
            ans -= (sz[u] * sz[v]);
            sz[v] += sz[u];
        }
    }
    for(int i = m - 1; i >= 0; i--) cout << ret[i] << endl;
}
