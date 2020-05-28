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

bool ans;

signed main() {
    int t = 1;
    cin >> t;
    while(t--) {
        int n, x;
        cin >> n >> x;
        vi d(n), h(n);
        int maxDH = INT_MIN, maxD = INT_MIN;
        for(int i = 0; i < n; i++) {
            cin >> d[i] >> h[i];
            maxD = max(maxD, d[i]);
            maxDH = max(maxDH, d[i] - h[i]);
        }
        int ans = 1;
        x -= maxD;
        if(maxDH > 0) {
            if(x > 0)
                ans += ((x + maxDH - 1) / maxDH);
        }
        else if(x > 0)
            ans = -1;
        cout << ans << endl;
    }
	return 0;
}
