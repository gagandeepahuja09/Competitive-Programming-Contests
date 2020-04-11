#include<bits/stdc++.h>
using namespace std;

#define ll long long int

int main() {
  ll n;
  cin >> n;
  vector<ll> cnt(n + 1), a(n);
  for(int i = 0; i < n; i++) {
      cin >> a[i];
      cnt[a[i]]++;
  }
  ll ans = 0;
  for(int i = 1; i <= n; i++) {
      ans += (cnt[i]) * (cnt[i] - 1) / 2;
  }
  for(int i = 0; i < n; i++) {
      ll curr = ans;
      curr -= (cnt[a[i]]) * (cnt[a[i]] - 1) / 2;
      curr += (cnt[a[i]] - 1) * (cnt[a[i]] - 2) / 2;
      cout << curr << endl;
  }
}
