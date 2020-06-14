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
// #define endl '\n'
#define N 200005
#define MOD 1000000007


signed main() {
    int t = 1;
    // cin >> t;
    while(t--) {
        vi p(N);
        p[0] = 1ll;
        for(int i = 1; i < N; i++) {
            p[i] = (p[i - 1] * 2) % MOD;
        }
        int n;
        cin >> n;
        vi a(n), b(n);
        map<vi, pair<int, int>> mp;
        int zero = 0ll;
        for(int i = 0; i < n; i++) {
            cin >> a[i] >> b[i];
            if(!a[i] && !b[i]) {
                zero++;
                continue;
            }
            int g = __gcd(a[i], b[i]);
            a[i] /= g; b[i] /= g;
            if(b[i] < 0)    {
                a[i] = -a[i];
                b[i] = -b[i];
            }
            if(a[i] <= 0) {
                mp[{ b[i], -a[i] }].second++;
            }
            else {
                mp[{ a[i], b[i] }].first++;
            }
        }
        int ans = 1ll;
        for(auto& it : mp) {
            ans *= (p[it.second.first] + p[it.second.second] - 1ll + MOD) % MOD;
        }
        cout << (ans + zero - 1ll + MOD) % MOD << endl;
    }
} 
