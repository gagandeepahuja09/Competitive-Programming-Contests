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
    int sum = 0, cnt = 0, mn = INT_MAX;
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        sum += abs(a[i]);
        if(a[i] < 0)    cnt++;
        mn = min(mn, abs(a[i]));
    }
    if(cnt % 2) sum -= (2 * mn);
    cout << sum << endl;
}
