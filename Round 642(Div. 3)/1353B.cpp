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

vvi adj;

signed main() {
    int t = 1;
    cin >> t;
    while(t--) {
        int n, k;
        cin >> n >> k;
        vi a(n), b(n);
        read(a); read(b);
        sort(a.begin(), a.end()); sort(b.begin(), b.end());
        for(int i = 0; i < n; i++) {
            if(k > 0 && a[i] < b[n - 1 - i]) {
                swap(a[i], b[n - 1 - i]);
                k--;
            }
            if(k <= 0)  break;
        }
        int ans = 0;
        for(int i = 0; i < n; i++)
            ans += a[i];
        cout << ans << endl;
    }
}
