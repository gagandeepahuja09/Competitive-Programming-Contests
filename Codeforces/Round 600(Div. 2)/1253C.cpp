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

signed main() {
    int t = 1;
    // cin >> t;
    while(t--) {
        int n, m;
        cin >> n >> m;
        vi a(n);
        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        vi ans(n, 0);
        int sum = 0;
        for(int i = 0; i < n; i++) {
            sum += a[i];
            ans[i] = sum;
            if(i >= m)
                ans[i] += ans[i - m];
            cout << ans[i] << " ";
        }
        cout << endl;
    }
}
 
