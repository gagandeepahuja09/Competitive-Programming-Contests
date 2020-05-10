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

vi v, c;
int a[12][12];
int x, mn;

void dfs(int i, vi v, int cost) {
    if(i == c.size()) {
        bool flag = true;
        for(int j = 0; j < v.size(); j++) {
            if(v[j] < x) {
                flag = false;
                break;
            }
        }
        if(flag == true) {
            mn = min(mn, cost);
        }
        return;
    }
    vi nv = v;
    dfs(i + 1, v, cost);
    for(int k = 0; k < nv.size(); k++) {
        nv[k] += a[i][k];
    }
    dfs(i + 1, nv, cost + c[i]);
}

signed main() {
    int n, m;
    cin >> n >> m >> x;
    c.resize(n);
    mn = INT_MAX;
    for(int i = 0; i < n; i++) {
        cin >> c[i];
        for(int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }
    v.assign(m, 0);
    dfs(0, v, 0);
    if(mn == INT_MAX) {
        cout << -1;
    }
    else {
        cout << mn;
    }
}
