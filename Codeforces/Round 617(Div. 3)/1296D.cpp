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
    // cin >> t;
    while(t--) {
        int n, a, b, k;
        cin >> n >> a >> b >> k;
        vi h(n);
        read(h);
        for(int i = 0; i < n; i++) {
            h[i] %= (a + b);
            if(!h[i])   h[i] = a + b;
            h[i] = (h[i] + a - 1) / a - 1;
        }
        sort(h.begin(), h.end());
        int ans = 0;
        for(int i = 0; i < n && k; i++) {
            if(k < h[i])
                break;
            k -= h[i];
            ans++;
        }
        cout << ans << endl;
    }
}
