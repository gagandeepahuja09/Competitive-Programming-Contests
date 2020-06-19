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
#define N 10000002
#define MOD 1000000007

signed main() {
    int n;
    cin >> n;
    vi a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    vi p(n), s(n);
    p[0] = a[0];
    for(int i = 1; i < n; i++) {
        p[i] = __gcd(p[i - 1], a[i]);
    }
    s[n - 1] = a[n - 1];
    for(int i = n - 2; i >= 0; i--) {
        s[i] = __gcd(s[i + 1], a[i]);
    }
    int ans = max(p[n - 2], s[1]);
    for(int i = 1; i < n - 1; i++) {
        ans = max(ans, __gcd(p[i - 1], s[i + 1]));
    }
    cout << ans << endl;
}