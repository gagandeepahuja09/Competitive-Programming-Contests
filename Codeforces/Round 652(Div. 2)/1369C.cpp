#include<bits/stdc++.h>
using namespace std;

#define int long long int
#define vi vector<int>
#define vvi vector<vi>
#define pb push_back

const int MOD = 1e9 + 7;

int power(int x, int y) {
    if(y == 0)  return 1ll;
    if(y % 2)   return (x * power(x, y - 1)) % MOD;
    int f = power(x, y / 2);
    return (f * f) % MOD;
}

signed main() {
    int t;
    cin >> t;
    while(t--) {
        int n, k;
        cin >> n >> k;
        priority_queue<int> pq;
        vi a(n);    
        for(int i = 0; i < n; i++) { 
            cin >> a[i];
        }
        vi w(k);    
        for(int i = 0; i < k; i++)  cin >> w[i];
        sort(w.begin(), w.end());
        sort(a.begin(), a.end());
        int ans = 0;
        vvi adj(k);
        int start = 0, cnt = 0;
        for(int i = n - 1; i >= 0; i--) {
            int f = a[i];
            while(!w[start])
                start = (start + 1) % k;
            w[start]--;
            adj[start].pb(f);
            if(cnt < k)
                start = (start + 1) % k;
            cnt++;
        }
        for(int i = 0; i < k; i++) {
          ans += (adj[i][0] + adj[i].back());
        }
        cout << ans << endl;
    }
}
