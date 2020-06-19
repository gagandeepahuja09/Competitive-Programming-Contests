#include<bits/stdc++.h>
using namespace std;

#define int long long int


signed main() {
    int n;
    cin >> n;
    int MOD = 1e9 + 7;
    vector<int> a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int ans = 0ll, p = 1ll;
    for(int i = 0; i < 60; i++) {
        int ones = 0ll, zero = 0ll;
        for(int x : a) {
            if(x & (1ll << i))    ones++;
            else    zero++;
        }
        ans = ans % MOD + ((ones * zero) % MOD * p) % MOD;
        p = (p * 2ll) % MOD;
        ans %= MOD;
    }
    cout << ans % MOD << endl;
}
