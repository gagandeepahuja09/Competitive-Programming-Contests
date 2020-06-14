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
        int n, m;
        cin >> n >> m;
        vector<string> v(n);
        for(int i = 0; i < n; i++)
            cin >> v[i];
        int r[n], c[m];
        memset(r, 0, sizeof r);
        memset(c, 0, sizeof c);
        for(int i = 0; i < n; i++) {
            int cnt = 0;
            for(int j = 0; j < m; j++) {
                if(v[i][j] == '*')  cnt++;
            }
            r[i] = cnt;
        }

        for(int j = 0; j < m; j++) {
            int cnt = 0;
            for(int i = 0; i < n; i++) {
                if(v[i][j] == '*')  cnt++;
            }
            c[j] = cnt;
        }

        // for(int i = 0; i < n; i++) {
        //     for(int j = 0; j < m; j++) {
        //         if(i < n -1 && v[i][j] == '*' && v[i + 1][j] == '*') {
        //             r[i][j] = max(r[i][j], r[i + 1][j]);
        //         }
        //         if(j < m - 1 && v[i][j] == '*' && v[i][j + 1] == '*') {
        //             c[i][j] = max(c[i][j], c[i][j + 1]);
        //         }
        //     }
        // }
        int mn = n + m;
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                int diff = n + m - r[i] - c[j];
                if(v[i][j] != '*')  diff--;
                mn = min(mn, diff);
            }
        }
        cout << mn << endl;
    }
}
