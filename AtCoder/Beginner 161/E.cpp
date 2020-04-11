#include<bits/stdc++.h>
using namespace std;

#define ll long long int

int main() {
  ll n, k, c;
  cin >> n >> k >> c;
  string s;
  cin >> s;
  vector<ll> l, r;
  ll prev = -1;
  for(ll i = 0; i < s.size(); i++) {
    if(s[i] == 'o' && (prev == -1 || i - prev > c)) {
      prev = i;
      l.push_back(i);
      // cout << i << endl;
      if(l.size() == k)	break;
    }
  }
  prev = -1;
  for(ll i = s.size() - 1; i >= 0; i--) {
    if(s[i] == 'o' && (prev == -1 || prev - i > c)) {
      prev = i;
      r.push_back(i);
      // cout << i << endl;
      if(r.size() == k)	break;
    }
  }
  ll i = 0, j = 0;
  reverse(r.begin(), r.end());
  for(int i = 0; i < l.size(); i++) {
      if(l[i] == r[i])
        cout << (l[i] + 1) << " ";
  }
}
