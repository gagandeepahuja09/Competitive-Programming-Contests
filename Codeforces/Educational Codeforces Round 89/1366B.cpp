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
#define N 1000002
#define MOD 1000000007

signed main() {
    int t = 1;
    cin >> t;
    while(t--) {
        int n, x, m;
        cin >> n >> x >> m;
        x--;
        // vvi v;
        int a = x, b = x;
        while(m--) {
            int l, r;
            cin >> l >> r;
            l--; r--;
            int u = max(l, a);
            int v = min(r, b);
            if(v >= u) {
                a = min(l, a);
                b = max(r, b);
            }
            // v.pb({ l, r });
        }
        cout << (b - a + 1) << endl;
    }
}
