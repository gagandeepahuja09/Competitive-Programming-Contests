#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define MAX 100005

bool vis[MAX];
vector<ll> adj[MAX];

ll n, m, cnt = 0, ans, k;

void dfs(int u) {
if(vis[u])
    return;
vis[u] = 1;
cnt++;
for(auto v : adj[u]) {
    dfs(v);
}
}

int main() {
ll t;
cin >> t;
while(t--) {
    ll n, sum = 0;
    cin >> n;
    for(int i = 0; i < n; i++) {
        ll a;
        cin >> a;
        sum += a;
    }
    ll ans = 0;
    ans = (sum / n);
    if(sum % n)
        ans++;
    cout << ans << endl;
}
}
