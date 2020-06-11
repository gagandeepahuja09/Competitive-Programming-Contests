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
    int n;
    cin >> n;
    vvi v(n, vi(2));
    vvi p(n, vi(2));
    vvi s(n, vi(2));
    for(int i = 0; i < n; i++) {
        cin >> v[i][0] >> v[i][1];
    }
    sort(v.begin(), v.end());
    p[0] = v[0];
    for(int i = 1; i < n; i++) {
        if(p[i][0] > p[i - 1][1]) {
            p[i][0] = p[i][1] = -1;
        }
        else {
            p[i][0] = min(v[i][0], p[i - 1][1]);
            p[i][1] = min(p[i - 1][1], v[i][1]);
        }
    }
    int ans = p[n - 2][1] - p[n - 2][0];
    s[n - 1] = v[n - 1];
    for(int i = n -2 ; i >= 0; i--) {
        if(s[i + 1][0] > v[i][1]) {
            s[i][0] = s[i][1] = -1;
        }
        else {
            s[i][1] = min(v[i][1], s[i + 1][1]);
            s[i][0] = min(v[i][1], s[i + 1][0]);
        }
    }
    ans = max(ans, s[1][1] - s[1][0]);
    for(int i = 1; i < n - 1; i++) {
        int y = min(s[i + 1][1], p[i - 1][1]);
        int x = min(s[i + 1][0], p[i - 1][1]);
        ans = max(ans, y - x);
    }
    cout << ans << endl;
}
