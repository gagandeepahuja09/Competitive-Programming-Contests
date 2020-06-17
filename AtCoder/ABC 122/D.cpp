#include <bits/stdc++.h>
using namespace std;
    
#define int long long int
#define vi vector<int>
#define vvi vector<vi>
#define read(a)  for(int i = 0; i < n; i++) cin >> a[i];
#define print(a)  for(int i = 0; i < n; i++) cout << a[i] << " ";
#define pb push_back
#define pql priority_queue<int>
#define pqs priority_queue<int, vi, greater<int>>
#define pqlv priority_queue<vi>
#define pqsv priority_queue<vi, vvi, greater<vi>>
#define endl '\n'
#define N 10000002
#define MOD 1000000007

int dp[101][4][4][4];

int f(int n, int a = 3, int b = 3, int c = 3) {
    if(n <= 0)  return 1;
    int ans = 0;
    if(dp[n][a][b][c] != -1)    return dp[n][a][b][c];
    for(int d = 0; d < 4; d++) {
        if(d == 2 && c == 1 && b == 0)  continue;
        if(d == 1 && c == 2 && b == 0)  continue;
        if(d == 2 && c == 0 && b == 1)  continue;
        if(a == 0 && b == 1 && d == 2)  continue;
        if(a == 0 && c == 1 && d == 2)  continue;
        ans += f(n - 1, b, c, d);
        ans %= MOD;
    }
    return dp[n][a][b][c] = ans;
}
    
signed main() {
    int n;
    cin >> n;
    memset(dp, -1, sizeof dp);
    cout << f(n) << endl;        
}
