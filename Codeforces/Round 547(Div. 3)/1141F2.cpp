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

bool ans;

signed main() {
    int t = 1;
    // cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vi a(n);
        read(a);
        map<int, vvi> mp;
        for(int r = 0; r < n; r++) {
            int sum = 0;
            for(int l = r; l >= 0; l--) {
                sum += a[l];
                mp[sum].pb({ l, r });
            }
        }
        vvi ret;
        for(auto& i : mp) {
            int sum = i.first;
            int r = -1;
            vvi curr;
            for(int i = 0; i < mp[sum].size(); i++) {
                if(mp[sum][i][0] > r) {
                    curr.pb(mp[sum][i]);
                    r = mp[sum][i][1];
                }
            }
            if(curr.size() > ret.size()) {
                ret = curr;
            }
        }
        cout << ret.size() << endl;
        for(auto i : ret)
            cout << i[0] + 1 << " " << i[1] + 1 << endl;
    }
	return 0;
}
