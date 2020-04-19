#include<bits/stdc++.h>
using namespace std;

#define ll long long int
 
int main() {
    ll n, k, MOD = 1e9 + 7;
    cin >> n >> k;
    vector<ll> sum(200002, 0);
    for(ll i = 1; i <= 200002; i++) {
        sum[i] = sum[i - 1] + i;
    }
    ll ans = 0;
    for(ll i = k; i <= n + 1; i++) {
        ll mn = sum[i], mx = sum[n + 1] - sum[n + 1 - i];
        // cout << mx << " " << mn << endl;
        ans = (ans + (mx - mn + 1) % MOD) % MOD;
    }
    cout << ans << endl;
}
