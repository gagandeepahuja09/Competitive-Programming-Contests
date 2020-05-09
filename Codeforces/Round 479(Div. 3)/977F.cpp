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

int binarySearch(vi& a, int idx) {
    int ans = -1;
    int low = 0, high = a.size() - 1;
    while(low <= high) {
        int mid = low + (high - low) / 2;
        if(a[mid] <= idx) {
            ans = a[mid];
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }
    return ans;
}

signed main() {
    int t = 1;
    // cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vi a(n);
        read(a);
        map<int, vi> adj;
        map<int, int> mp, v;
        int mx = 0, num = 0;
        int idx = 0;
        for(int i = 0; i < n; i++) {
            adj[a[i]].pb(i);
            mp[a[i]] = mp[a[i] - 1] + 1;
            if(!v.count(a[i]))
                v[a[i]] = i + 1;
            if(mp[a[i]] > mx) {
                mx = mp[a[i]];
                num = a[i];
                idx = i;
            }
        }
        vi ret;
        ret.pb(idx + 1);
        while(num) {
            if(!adj[num - 1].size())
                break;
            int p = binarySearch(adj[num - 1], idx - 1);
            idx = p;
            if(idx == -1)   break;
            num--;
            ret.pb(idx + 1);
        }
        reverse(ret.begin(), ret.end());
        cout << ret.size() << endl;
        for(int i : ret)
            cout << i << " ";
    }
}
