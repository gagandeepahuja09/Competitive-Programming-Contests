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
// #define endl '\n'
#define N 10000002
#define MOD 1000000007

signed main() {
    int t = 1;
    cin >> t;
    while(t--) {
        int n, x;
        cin >> n >> x;
        vi a(n);
        read(a);
        int sm = accumulate(a.begin(), a.end(), 0);
        int i = 0, sum = sm;
        while(i < n && sum % x == 0) {
            sum = (sum - a[i++] + x) % x;
        }
        int ans = n - i;
        int j = n - 1;
        sum = sm;
        while(j >= 0 && sum % x == 0) {
            sum = (sum - a[j--] + x) % x;
        }
        ans = max(ans, j + 1);
        if(ans == 0)    ans = -1;
        cout << ans << endl;
    }
}
