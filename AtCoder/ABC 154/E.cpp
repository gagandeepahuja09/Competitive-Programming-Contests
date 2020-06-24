#include<bits/stdc++.h>
using namespace std;

#define int long long int
#define vi vector<int>
#define vvi vector<vi>
#define pb push_back

const int MOD = 1e9 + 7;

vvi adj;

int dp[101][4][2];


int power(int x, int y) {
    if(y == 0)  return 1ll;
    if(y % 2)   return (x * power(x, y - 1)) % MOD;
    int f = power(x, y / 2);
    return (f * f) % MOD;
}

int f(string s, int k, int i, bool lastSame) {
    if(k == 0)  return 1;
    if(k < 0 || i == s.size())   return 0;
    int num = s[i] - '0';
    if(dp[i][k][lastSame] != -1)    return dp[i][k][lastSame];
    int ans = 0;
    if(lastSame) {
        for(int j = 0; j <= num; j++) { 
            ans += f(s, k - (j != 0), i + 1, (j == num));
        }
    }
    else {
        for(int j = 0; j <= 9; j++) {
            ans += f(s, k - (j != 0), i + 1, false);
        }
    }
    return dp[i][k][lastSame] = ans;
}

signed main() {
    string s;
    int k;
    cin >> s >> k;
    memset(dp, -1, sizeof dp);
    cout << f(s, k, 0, true);
}
