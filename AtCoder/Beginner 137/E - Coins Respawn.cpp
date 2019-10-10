#include<bits/stdc++.h>
using namespace std;

#define ll long long int

int main() {
    ll n, m, p;
    cin >> n >> m >> p;
    vector<ll> a(m), b(m), c(m), dp(n, 1e11);
    vector<bool> reach(n, false); 
    bool flag = false;
    for(int i = 0; i < m; i++) {
        cin >> a[i] >> b[i] >> c[i];
        a[i]--; b[i]--;
        c[i] = p - c[i]; // -(c[i] - p)
    }
    dp[0] = 0;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if(dp[a[j]] != 1e11 && dp[b[j]] > dp[a[j]] + c[j]) {
                dp[b[j]] = dp[a[j]] + c[j];
                if(i == n - 1) {
                    flag = true;
                    reach[a[j]] = reach[b[j]] = true;
                }
            }
        }
    }
    if(flag) {
        for(int i = 0; i < n - 1; i++) {
            for(int j = 0; j < m; j++) {
                reach[b[j]] = reach[a[j]] | reach[b[j]];
            }
        }
    }
    if(reach[n - 1])
        cout << -1 << endl;
    else    
        cout << max(0LL, -dp[n - 1]) << endl;
}
