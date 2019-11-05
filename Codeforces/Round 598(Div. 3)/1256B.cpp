#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define MOD 1000000007
#define MAX 2002

int main() {
ll t;
cin >> t; while(t--) {
    ll n;
    cin >> n;
    vector<ll> a(n);
    map<ll, ll> mp;
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        mp[a[i]] = i;
    }
    vector<bool> vis(n, false);
    for(auto x : mp) {
        ll idx = x.second;
        while(idx > 0 && !vis[idx] && a[idx] < a[idx - 1]) {
            swap(a[idx], a[idx - 1]);
            vis[idx] = true;
            idx--;
        }
    }
    for(auto x : a)
        cout << x << " ";
    cout << endl;    
}
}
