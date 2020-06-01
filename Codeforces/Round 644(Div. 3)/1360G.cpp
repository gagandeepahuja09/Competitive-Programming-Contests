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
#define N 300002
 
signed main() {
    ios::sync_with_stdio(false); 
    cin.tie(0); 
    cout.tie(0);
    int t = 1;
    cin >> t;
    while(t--) {
        int n, m, a, b;
        cin >> n >> m >> a >> b;
        if(n * a != m * b) {
            cout << "NO" << endl;
        }
        else {
            int ans[n][m];
            memset(ans, 0, sizeof ans);
            cout << "YES" << endl;
            vvi v(m, vi(2, 0));
            for(int i = 0; i < m; i++) {
                v[i][1] = i;
            }
            for(int i = 0; i < n; i++) {
                sort(v.begin(), v.end());
                for(int j = 0; j < a; j++) {
                    int idx = v[j][1];
                    ans[i][idx] = 1;
                    v[j][0]++;
                }
            }
            for(int i = 0; i < n; i++) {
                for(int j = 0; j < m; j++) {
                    cout << ans[i][j];
                }
                cout << endl;
            }
        }
    }
	return 0;
}
