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
    int q = 1;
    cin >> q;
    while(q--) {
        int n, m;
        cin >> n >> m;
        bool ans = true;
        int currMin = m, currMax = m, currT = 0;
        while(n--) {
            int t, l, r;
            cin >> t >> l >> r;
            currMin -= (t - currT);
            currMax += (t - currT);
            if(currMax < l || currMin > r) {
                ans = false;
            }
            else {
                currMin = max(l, currMin); 
                currMax = min(r, currMax);    
            }
            currT = t;
        }
        if(ans) cout << "YES" << endl;
        else    cout << "NO" << endl;
    }
}
