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
    // cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int ans = 0;
        vi v(1e6 + 1, 0);
        vi a(n); read(a); sort(a.begin(), a.end());
        int prev = -1;
        for(int i = 0; i < n; i++) {
            int prev = a[i];
            if(i < n - 1 && a[i] == a[i + 1]) continue;
            if(i > 0 && a[i] == a[i - 1]);
            else if(!v[prev])    ans++;
            for(int j = prev; j <= 1e6; j += prev) {
                v[j] = 1;
            }
        }
        cout << ans << endl;
    }
} 
