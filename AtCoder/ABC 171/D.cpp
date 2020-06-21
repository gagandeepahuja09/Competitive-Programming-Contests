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
    map<int, int> mp;
    int sum = 0;
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        sum += a[i];
        mp[a[i]]++;
    }
    int q;
    cin >> q;
    while(q--) {
        int x, y;
        cin >> x >> y;
        sum += (y * mp[x]);
        sum -= (x * mp[x]);
        mp[y] += mp[x];
        mp[x] = 0;
        cout << sum << endl; 
    }
}
