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

signed main() {
    int t = 1;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vi a(n + 1);
        for(int i = 1; i <= n; i++)
            cin >> a[i];
        vi dp(n + 1, 1);
        for(int i = 1; i <= n; i++) {
            for(int j = 2 * i; j <= n; j += i) {
                if(a[i] < a[j])
                    dp[j] = max(dp[j], 1 + dp[i]);
            }
        }
        cout << *max_element(dp.begin(), dp.end()) << endl;
    }
}
