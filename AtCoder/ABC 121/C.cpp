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
    int n, m;
    cin >> n >> m;
    vvi v(n, vi(2));
    for(int i = 0; i < n; i++) cin >> v[i][0] >> v[i][1];
    sort(v.begin(), v.end());
    int cost = 0;
    for(int i = 0; i < n; i++) {
        cost += (v[i][0] * min(m, v[i][1]));
        m -= v[i][1];
        if(m <= 0)  break;
    }
    cout << cost << endl;        
}
