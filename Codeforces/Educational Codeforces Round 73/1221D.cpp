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
#define N 300002

bool cycle;

vi a, b;
int dp[N][3];

int f(int i, int add, int n) {
    if(i == n)
        return dp[i][add] = 0;
    int ans = 1e17;
    if(dp[i][add] != -1)
        return dp[i][add];
    for(int x = 0; x <= 2; x++) {
        if(i == 0 || a[i] + x != a[i - 1] + add) {
            ans = min(ans, b[i] * x + f(i + 1, x, n));
        }
    }
    return dp[i][add] = ans;
}

signed main() {
    ios::sync_with_stdio(false); 
    cin.tie(0); 
    cout.tie(0);
    int t = 1;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        a.resize(n);
        b.resize(n);
        for(int i = 0; i < n; i++) {
            cin >> a[i] >> b[i];
            dp[i][0] = dp[i][1] = dp[i][2] = -1;
        }
        cout << f(0, 0, n) << endl;
    }
	return 0;
}
