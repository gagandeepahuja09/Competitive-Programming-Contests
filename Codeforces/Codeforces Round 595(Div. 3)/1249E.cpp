#include<bits/stdc++.h>
using namespace std;

#define ll long long int

int main() {
    ll n, c;
    cin >> n >> c;
    vector<ll> a(n - 1), b(n - 1);
    for(int i = 0; i < n - 1; i++)
        cin >> a[i];
    for(int i = 0; i < n - 1; i++)
        cin >> b[i]; 
    vector<vector<ll>> dp(n, vector<ll>(2, LLONG_MAX));
    cout << "0 ";
    dp[0][0] = 0, dp[0][1] = c;
    for(int i = 0; i < n - 1; i++) {
        dp[i + 1][0] = min(dp[i + 1][0], dp[i][0] + a[i]);
        dp[i + 1][0] = min(dp[i + 1][0], dp[i][1] + a[i]);
        dp[i + 1][1] = min(dp[i + 1][1], dp[i][1] + b[i]);
        dp[i + 1][1] = min(dp[i + 1][1], dp[i][0] + b[i] + c);
        cout << min(dp[i + 1][0], dp[i + 1][1]) << " ";
    }
}
