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
    vi a(n);
    read(a);
    // sort(a.begin(), a.end());
    int mx = 0;
    for(int i = 0; i < n; i++) {
        int j = i + 1, cnt = 0;
        while(j < n && a[j] <= 2 * a[j - 1]) {
            cnt++; j++;
        }
        mx = max(mx, cnt);
        i = j - 1;
    }
    cout << mx + 1 << endl;
}
