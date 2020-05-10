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
     
    vvi adj;
    vi v, inT, outT, pos;
     
    void dfs(int u, int p, int& T) {
        inT[u] = T++;
        v.pb(u);
        pos[u] = v.size() - 1;
        for(int j : adj[u]) {
            if(j == p)  continue;
            dfs(j, u, T);
        }
        outT[u] = T++;
    }
     
    signed main() {
        int t = 1;
        // cin >> t;
        while(t--) {
            int n, q;
            cin >> n >> q;
            adj.resize(n + 1);
            inT.resize(n + 1);
            outT.resize(n + 1);
            pos.resize(n + 1);
            for(int i = 2; i <= n; i++) {
                int p;
                cin >> p;
                if(p != i) {
                    adj[i].pb(p);
                    adj[p].pb(i);
                }
            }
            int T = 0;
            dfs(1, -1, T);
            while(q--) {
                int u, k;
                cin >> u >> k;
                int p = pos[u] + k - 1;
                if(p < v.size()) {
                    int ele = v[p];
                    if(inT[ele] >= inT[u] && outT[ele] <= outT[u]) {
                        cout << ele << endl;
                    }
                    else
                        cout << -1 << endl;
                }
                else {
                    cout << -1 << endl;
                }
            }
        }   
    }
