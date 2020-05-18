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
#define MOD 998244353
#define all(a)  (a.begin(), a.end())

signed main() {
    int t = 1;
    // cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vvi v(n + 1);
        vi cnt(n + 1, 0);
        for(int i = 0; i < n - 2; i++) {
            int x, y, z;
            cin >> x >> y >> z;
            v[x].pb(y); v[x].pb(z);
            v[y].pb(x); v[y].pb(z);
            v[z].pb(x); v[z].pb(y);
            cnt[x]++; cnt[y]++; cnt[z]++;
        }
        int x, y, z;
        for(int i = 1; i <= n; i++) {
            if(cnt[i] == 1) {
                x = i;
                break;
            }
        }
        if(cnt[v[x][0]] == 2)
            y = v[x][0];
        else
            y = v[x][1];
        vi vis(n + 1, 0);
        vis[x] = 1; vis[y] = 1;
        cout << x << " " << y << " ";
        for(int i = 0; i < n - 2; i++) {
            for(int j = 0; j < v[x].size(); j++) {
                if(!vis[v[x][j]]) {
                    z = v[x][j];
                    vis[z] = 1;
                    cout << z << " ";
                    break;
                }
            }
            x = y; y = z;
        }
        cout << endl;
    }
}
 
