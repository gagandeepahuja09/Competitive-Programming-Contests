#include<bits/stdc++.h>
using namespace std;

#define ll long long int

int main() {
    int t;
    cin >> t;
    while(t--) {
        ll n, r;
        cin >> n >> r;
        ll a[n];
        for(int i = 0; i < n; i++)
            cin >> a[i];
        sort(a, a + n);
        n = unique(a, a + n) - a;
        ll ans = 0;
        for(int i = n - 1; i >= 0; i--) {
            if(a[i] - ans * r > 0) {
                ans++;
            }
        }
        cout << ans << endl;
    }
}
