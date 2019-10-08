#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define N 1000001

ll dp[1001][(1 << 12) + 1];

ll f(vector<ll>& c, vector<ll>& a, ll i, ll mask, ll n) {
    if(i == a.size())
        return (mask == ((1 << n) - 1)) ? 0 : 5e8;
    if(dp[i][mask] != -1)
        return dp[i][mask];
    ll option1 = a[i] + f(c, a, i + 1, mask | c[i], n);
    ll option2 = f(c, a, i + 1, mask, n);
    return dp[i][mask] = min(option1, option2);
}

int main() {
    ll n, m;
    cin >> n >> m;
    memset(dp, -1, sizeof dp);
    vector<ll> c(m);
    vector<ll> a(m);
    for(int i = 0; i < m; i++) {
        ll k;
        cin >> a[i] >> k;
        for(int j = 0; j < k; j++) {
            int u;
            cin >> u;
            c[i] |= (1 << (u - 1));
        }
    }
    ll ans = f(c, a, 0, 0, n);
    if(ans == 5e8)
        ans = -1;
    cout << ans << endl;
}
