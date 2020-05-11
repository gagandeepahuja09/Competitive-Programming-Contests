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

int power(int x, int y) {
    if(y == 0)
        return 1ll;
    if(y % 2)
        return (x % MOD * power(x, y - 1) % MOD) % MOD;
    int t = power(x, y / 2);
    return (t % MOD * t % MOD) % MOD; 
}

signed main() {
    int n, m;
    string a, b;
    cin >> n >> m;
    cin >> a >> b;
    if(n < m) {
        string temp = string(m - n, '0') + a;
        a = temp;
        n = m;
    }
    else if(m < n) {
        string temp = string(n - m, '0') + b;
        b = temp;
        m = n;
    }
    int ans = 0, cnt = 0;
    for(int i = 0; i < n; i++) {
        if(b[i] == '1')
            cnt++;
        if(a[i] == '1') {
            ans = (ans % MOD + (power(2, n - 1 - i) * cnt % MOD) % MOD) % MOD;
        }
    }
    cout << ans << endl;
}
