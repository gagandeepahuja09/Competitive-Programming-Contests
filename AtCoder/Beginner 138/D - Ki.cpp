#include<bits/stdc++.h>
using namespace std;

#define ll long long int

void dfs(ll u, vector<ll>& val, vector<vector<ll>>& adj, ll prev) {
    for(int i = 0; i < adj[u].size(); i++) {
        if(adj[u][i] != prev) {
            val[adj[u][i]] += val[u];
            dfs(adj[u][i], val, adj, u);
        }
    }
}

int main() {
    int n, q;
    cin >> n >> q;
    vector<vector<ll>> adj(n);
    vector<ll> val(n, 0);
    for(int i = 0; i < n - 1; i++) {
        ll u, v;
        cin >> u >> v;
        adj[u - 1].push_back(v - 1);
        adj[v - 1].push_back(u - 1);
    }
    for(int i = 0; i < q; i++) {
        ll u, v;
        cin >> u >> v;
        val[u - 1] += v;
    }
    dfs(0, val, adj, -1);
    for(int i = 0; i < n; i++)
        cout << val[i] << " ";
}
