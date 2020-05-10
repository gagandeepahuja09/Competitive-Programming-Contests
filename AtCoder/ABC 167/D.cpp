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

int n, k, val;
vi a, vis, v;

void dfs(int i) {
    if(vis[i]) {
        val = i;
        return;
    }
    v.pb(i);
    vis[i] = 1;
    dfs(a[i - 1]);
}

signed main() {
    int n, k;
    cin >> n >> k;
    a.resize(n);
    read(a);
    vis.assign(n + 1, 0);
    dfs(1);
    vi x;
    bool has = false;
    for(int i : v) {
        if(i == val)
            has = true;
        if(has)  {
            x.pb(i);
        }
    }
    int diff = v.size() - x.size();
    if(k <= diff) {
        cout << v[k];
    }
    else {
        k -= diff;
        int ans = x[k % x.size()];
        cout << ans;
    }
}
