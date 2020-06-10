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
#define N 1234567
#define MOD 1000000007

signed main() {
    ios::sync_with_stdio(false); 
    cin.tie(0); 
    cout.tie(0);
    int t = 1;
    // cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vi a(n); read(a);
        vi b(n); read(b);
        int i = 0, j = 0;
        int cnt = 0;
        vi pos(n + 1);
        for(int i = 0; i < n; i++) {
            pos[a[i]] = i;
        }
        vi c(n + 1, 0);
        for(int i = 0; i < n; i++) {
                int d = i - pos[b[i]];
                // cout << d << endl;
                if(d < 0)   d += n;
                c[d]++;
        }
        int mx = 0;
        for(int i = 0; i < n; i++) {
            mx = max(mx, c[i]);
        }
        cout << mx << endl;
    }
	return 0;
}
