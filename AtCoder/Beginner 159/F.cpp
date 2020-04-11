#include<bits/stdc++.h>
using namespace std;

#define ll long long int

ll MOD;
ll dp[3002][3002][2];

ll f(vector<ll>& a, ll i, ll s, bool flag) {
    if(s == 0) {
        return (ll)(a.size() + 1 - i);
    }
    if(s < 0 || i == a.size())
        return 0ll;
    if(dp[i][s][flag] != -1)
        return dp[i][s][flag];
    ll ans = 0;
    if(!flag) {
        ans += f(a, i + 1, s, flag);
        ans += (ll)(i + 1) * f(a, i + 1, s - a[i], !flag);
    }
    else {
        ans += f(a, i + 1, s, flag);
        ans += f(a, i + 1, s - a[i], flag);
    }
    return dp[i][s][flag] = ans % MOD;
}

int main() {
  MOD = 998244353;
  ll n, s;
  memset(dp, -1, sizeof dp);
  cin >> n >> s;
  vector<ll> a(n);
  for(ll i = 0; i < n; i++)
    cin >> a[i];
  cout << f(a, 0, s, 0);
}
