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

vvi adj;

signed main() {
    int t = 1;
    // cin >> t;
    while(t--) {
        int n, m;
        cin >> n >> m;
        vi a(n);
        read(a);
        vi v(m, 0);
        if(n > m) {
            cout << 0 << endl;
            return 0;
        }
        int ans = 1;
        for(int i = 0; i < n; i++) {
            for(int j = i + 1; j < n; j++) {
                ans *= abs(a[i] - a[j]);
                ans %= m;
            }
        }
        cout << ans << endl;
    }
}
