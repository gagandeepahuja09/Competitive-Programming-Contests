#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main() {
int t;
cin >> t;
while(t--) {
    ll n;
    cin >> n;
    vector<ll> a(n);
    unordered_map<ll, ll> mp;
    for(int i = 0; i < n; i++)
        cin >> a[i];
    int j = 0;
    ll ans = INT_MAX;
    for(int i = 0; i < n; i++) {
        if(mp.find(a[i]) != mp.end()) {
            ans = min(ans, i - mp[a[i]] + 1);
        }
        mp[a[i]] = i;
    }
    cout << (ans == INT_MAX ? -1 : ans) << endl;
}
}
