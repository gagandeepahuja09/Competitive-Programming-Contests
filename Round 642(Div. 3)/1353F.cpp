#include <bits/stdc++.h>
using namespace std;
 
#define int long long int
#define vi vector<int>
#define vvi vector<vi>
#define read(a)  for(int i = 0; i < n; i++) cin >> a[i];
#define print(a)  for(int i = 0; i < n; i++) cout << a[i] << " ";
#define pb push_back
#define ins insert
#define pql priority_queue<int>
#define pqs priority_queue<int, vi, greater<int>>
#define pqlv priority_queue<vi>
#define pqsv priority_queue<vi, vvi, greater<vi>>
#define endl '\n'
#define MOD 998244353
#define all(a)  (a.begin(), a.end())
#define MAXN 101

int a[MAXN][MAXN];
int dp[MAXN][MAXN];

int n, m;

int f(int val, int i, int j) {
	int ans = 0;
	if(i == n - 1 && j == m - 1) {
	    int extra = a[i][j] - (val + i + j);
		return extra >= 0 ? extra : -2;
	}
	if(i == n || j == m)
	    return 1e18;
	if(dp[i][j] != -1)
		return dp[i][j];
	int extra = a[i][j] - (val + i + j);
	if(extra < 0) {
	    ans = -2;
	}
	else {
		int r = f(val, i + 1, j), d = f(val, i, j + 1);
		if(r == -2 && d == -2)
		    ans = -2;
		else if(r == -2)
		    ans = d + extra;
		else if(d == -2)
		    ans = r + extra;
		else
		    ans = min(r, d) + extra;
	}
	return dp[i][j] = ans;
}

signed main() {
    int t = 1;
    cin >> t;
    while(t--) {
    	cin >> n >> m;
    	for(int i = 0; i < n; i++) {
    		for(int j = 0; j < m; j++) {
    			cin >> a[i][j];
    		}
    	}
    	int mn = LLONG_MAX;
    	for(int i = 0; i < n; i++) {
    		for(int j = 0; j < m; j++) {
    			memset(dp, -1, sizeof dp);
    			int curr = f(a[i][j] - i - j, 0, 0);
    			if(curr >= 0) {
    			    mn = min(mn, curr);
    			}
    		}
    	}
    	cout << mn << endl;
    }
}
