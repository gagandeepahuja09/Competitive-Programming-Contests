#include<bits/stdc++.h>
using namespace std;

#define ll long long int

int main() {
  ll n, k;
  cin >> n >> k;
  vector<ll> a(n);
  for(int i = 0; i < n; i++) {
    cin >> a[i];
  }
  ll ret = 0, i = 0, j = 0, sum = 0;
  while(j < n) {
  	while(i < n && sum < k) {
      sum += a[i++];
    }
    if(sum < k)
        break;
    ret += (n - i) + 1;
    sum -= a[j++];
  }
  cout << ret << endl;
}
