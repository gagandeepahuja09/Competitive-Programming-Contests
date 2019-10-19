#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define MOD 1000000007
#define MAXN 100001

/*
int spf[MAXN];
*/
signed main() {
    int t, it = 1;
    cin >> t;
    /*memset(spf, -1, sizeof spf);
    spf[1] = 1;
    for (int i=2; i*i<MAXN; i++) { 
        if (spf[i] == =1) { 
            for (int j=i*i; j<MAXN; j+=i) {
                if (spf[j] == -1) 
                    spf[j] = i; 
            }
        } 
    } */
    while(t--) {
        int n, m, q;
        cin >> n >> m >> q;
        unordered_map<int, int> mp;
        for(int i = 0; i < m; i++) {
            int u;
            cin >> u;
            for(int j = 1; j * j <= u; j++) {
                if(u % j == 0) {
                    mp[j]++;
                    if(j != u / j)
                        mp[u / j]++;
                }
            }
        }
        int ans = 0;
        for(int i = 0; i < q; i++) {
            int u;
            cin >> u;
            ans += (n / u) - mp[u];
        }
        cout << "Case #" << it << ": " <<ans << endl;
        it++;
    }
	return 0;
}

