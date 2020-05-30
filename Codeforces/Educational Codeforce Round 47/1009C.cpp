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
        vi a(n, 0), x(m), d(m);
        int sum = 0, d1 = 0, d2 = 0;
        for(int i = 0; i < m; i++) {
            cin >> x[i] >> d[i];
            sum += x[i];
            if(d[i] < 0) {
                d1 += d[i];
            }
            else {
                d2 += d[i];
            }
        }
        for(int i = 0; i < n; i++)
            a[i] += sum;
        for(int i = 0; i < n; i++) {
            a[i] += (d2 * i);
        }
        int j = n / 2;
        long double total = 0;
        for(int i = 0; i < n; i++) {
            a[i] += (d1 * abs(i - j));
            total += a[i];
        }
        total = total / (long double)(n);
        cout << fixed << setprecision(10) << total << endl;
    }
	return 0;
}
