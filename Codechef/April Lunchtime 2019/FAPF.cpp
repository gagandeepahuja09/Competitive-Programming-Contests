#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
 
int main() {
	ll t;
	cin>>t;
	while(t--) {
        ll n, q;
        cin >> n >> q;
        vector<ll> a(n);
        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }
        unordered_map<ll, vector<ll>> mp;
        vector<pair<ll, ll>> s;
        sort(s.begin(), s.end());
        for(int i = 0; i < a.size(); i++) {
            s.push_back({ a[i], i });
        }
        sort(s.begin(), s.end());
        for(int i = 0; i < s.size(); i++) {
            mp[s[i].first].push_back(i);
            sort(mp[s[i].first].begin(), mp[s[i].first].end());
        }
        while(q--) {
            ll x, y;
            cin >> x >> y;
            ll n1 = a[x - 1], n2 = a[y - 1];
            ll ans = abs(n1 - n2) + (y - x);
            ll len = max(abs(mp[n2].back() - mp[n1].front()), 
            abs(mp[n2].front() - mp[n1].back())) + 1;
            cout << ans << " " << len << endl;
        }
	}
 }
