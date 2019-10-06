#include<bits/stdc++.h>
using namespace std;

#define ll long long int

int main() {
  ll n, m, MOD = 1e9 + 7;
  cin >> n >> m;
  vector<ll> s(n), t(m);
  for(int i = 0; i < n; i++) {
    cin >> s[i];
  }
  for(int i = 0; i < m; i++) {
    cin >> t[i];
  }
  
  ll sum[2001][2001], dp[2001][2001], ans = 0;
  memset(sum, 0, sizeof sum);
  memset(dp, 0, sizeof dp);
  for(int i = 1; i <= n; i++) {
      for(int j = 1; j <= m; j++) {
        if(s[i - 1] == t[j - 1]){
            dp[i][j] = sum[i - 1][j - 1] + 1;
        }
        else {
            dp[i][j] = 0;
        }
        sum[i][j] = ((sum[i - 1][j] + sum[i][j - 1] - sum[i - 1][j - 1] + MOD) % MOD
            + dp[i][j] % MOD) % MOD;
        ans = (ans + dp[i][j]) % MOD;
      }
  }
  cout << (ans + 1) % MOD << endl;
}
