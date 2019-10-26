#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main() {
    int t;
    cin >> t;
    while(t--) {
        ll n, k;
        cin >> n >> k;
        vector<ll> a(n);
        for(int i = 0; i < n; i++)
            cin >> a[i];
        ll ans = 0;
        for(int i = 0; i < n; i++) {
            for(int j = i + 1; j < n; j++) {
                if(a[i] == a[j])
                    continue;
                if(a[i] > a[j]) {
                    ans += (((k) * (k + 1)) / 2);
                }
                else
                    ans += (((k - 1) * (k)) / 2);
            }
        }
        cout << ans << endl;
    }
}
