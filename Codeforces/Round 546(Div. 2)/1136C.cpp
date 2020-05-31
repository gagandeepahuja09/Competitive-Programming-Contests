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
    // cin >> t;
    while(t--) {
        int n, m;
        cin >> n >> m;
        vvi x(n + m), y(n + m);
        int a[n + 1][m + 1], b[n + 1][m + 1];
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                cin >> a[i][j];
                x[i + j].pb(a[i][j]);
            }
        }
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                cin >> b[i][j];
                y[i + j].pb(b[i][j]);
            }
        }
        bool flag = true;
        for(int i = 0; i < n + m; i++) {
            vi v1 = x[i], v2 = y[i];
            sort(v1.begin(), v1.end());
            sort(v2.begin(), v2.end());
            if(v1 != v2) {
                flag = false;
                break;
            }
        }
        if(flag)    cout << "YES" << endl;
        else    cout << "NO" << endl;
    }
	return 0;
}
