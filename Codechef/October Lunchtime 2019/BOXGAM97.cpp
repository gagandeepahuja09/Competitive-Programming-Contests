#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main() {
    int t;
    cin >> t;
    while(t--) {
        ll n, k, p;
        cin >> n >> k >> p;
        vector<ll> a(n);
        ll mx = INT_MIN, mn = INT_MAX, mxi = 0, mni = 0;
        for(int i = 0; i < n; i++) {
            cin >> a[i];
            mx = max(mx, a[i]);
            mn = min(mn, a[i]);
        }
        if(p == 0) {
            if(k % 2)
                cout << mx << endl;
            else {
                ll mx = INT_MIN;
                mx = max(mx, a[1]);
                mx = max(mx, a[n - 2]);
                
                for(int i = 1; i < n - 1; i++) {
                    ll mn = min(a[i - 1], a[i + 1]);
                    mx = max(mn, mx);
                }
                cout << mx << endl;
            }
        }
        else {
            if(k % 2)
                cout << mn << endl;
            else {
                ll mn = INT_MAX;
                mn = min(mn, a[1]);
                mn = min(mn, a[n - 2]);
                for(int i = 1; i < n - 1; i++) {
                    ll mx = max(a[i - 1], a[i + 1]);
                    mn = min(mn, mx);
                }
                cout << mn << endl;
            }
        }
    }
}
