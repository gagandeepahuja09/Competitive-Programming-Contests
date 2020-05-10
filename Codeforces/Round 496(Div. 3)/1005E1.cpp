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

signed main() {
    int t = 1;
    // cin >> t;
    while(t--) {
        int n, m;
        cin >> n >> m;
        vi p(n);
        read(p);
        map<int, int> mp;
        int sum = 0, ans = 0;
        mp[0]++;
        bool has = false;
        for(int i = 0; i < n; i++) {
            if(p[i] > m)    sum++;
            else if(p[i] < m)   sum--;
            if(p[i] == m) has = true;
            if(has)
                ans += (mp[sum] + mp[sum - 1]);
            else
                mp[sum]++;
        }
        cout << ans << endl;
    }
}
