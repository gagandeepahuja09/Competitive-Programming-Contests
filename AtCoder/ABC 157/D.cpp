#include<bits/stdc++.h>
using namespace std;

#define int long long int

signed main() {
  // int t;
  // cin >> t;
  // while(t--) {
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for(int i = 0; i < n; i++) {
    	cin >> a[i];
      	a[i]++;
    }
    double curr = 0, ans = 0;
    for(int i = 0; i < k; i++) {
    	curr += a[i];
    }
  	ans = curr / (double)2.0;
  	for(int i = k; i < n; i++) {
      curr += a[i];
      curr -= a[i - k];
      ans = max(ans, curr / (double)2.0);
    }
    cout << fixed << setprecision(10) << ans;
  // }
}
