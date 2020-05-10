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

int mp[8001];

signed main() {
    int t = 1;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vi v;
        if(n % 2 == 0) {
            for(int i = 1; i <= n; i += 2)
                v.pb(i);
            for(int i = n; i >= 2; i -= 2)
                v.pb(i);
        }
        else {
            for(int i = 2; i <= n; i += 2)
                v.pb(i);
            for(int i = n; i >= 1; i -= 2)
                v.pb(i);
        }
        int sz = v.size();
        if(sz / 2 - 2 >= 0)
        swap(v[sz / 2 - 1], v[sz / 2 - 2]);
        int ans = 0;
        for(int i = 1; i < sz; i++) {
            if(abs(v[i] - v[i - 1]) <= 1 || abs(v[i] - v[i - 1]) >= 5)
                ans = -1;
        }
        if(ans == -1)
            cout << ans;
        else {
            for(int i : v)
                cout << i << " ";
        }
        cout << endl;
    }
}
