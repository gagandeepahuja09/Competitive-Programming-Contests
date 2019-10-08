#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define N 1000001

int main() {
    ll n, m;
    cin >> n >> m;
    vector<vector<ll>> adj(n);
    for(int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        adj[u - 1].push_back(v - 1);
    }
    vector<ll> ans;
    for(int i = 0; i < n; i++) {
        queue<ll> q;
        q.push(i);
        vector<ll> parent(n, -1);
        while(!q.empty()) {
            ll j = q.front();
            q.pop();
            for(auto k : adj[j]) {
                if(k == i) {
                    vector<ll> path;
                    while(j != i) {
                        path.push_back(j + 1);
                        j = parent[j];
                    }
                    path.push_back(i + 1);
                    if(ans.empty() || path.size() < ans.size()) {
                        ans = path;
                        goto next;
                    }
                }
                else if(parent[k] == -1) {
                    parent[k] = j;
                    q.push(k);
                }
            }
        }
        next:;
    }
    if(ans.empty()) {
        cout << "-1" << endl;
        return 0;
    }
    cout << ans.size() << endl;
    for(auto i : ans)
        cout << i << endl;
    return 0;    
}
