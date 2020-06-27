#include<bits/stdc++.h>
using namespace std;

#define int long long int
#define vi vector<int>

signed main() {
    int t = 1;
    //cin >> t;
    while(t--) {
        int n, m, k;
        cin >> n >> m >> k;
        vi a(n), b(m);
        for(int i = 0; i < n; i++)  cin >> a[i];
        for(int i = 0; i < m; i++)  cin >> b[i];
        int cnt = 0, sum = 0;
        vi pa(n), pb(m);
        pa[0] = a[0]; pb[0] = b[0];
        for(int i = 0; i < n; i++) {
            sum += a[i];
            pa[i] = sum;
        }
        sum = 0;
        for(int i = 0; i < m; i++) {
            sum += b[i];
            pb[i] = sum;
        }
        int ans = 0, j = m - 1;
        for(int i = 0; i < n; i++) {
            if(pa[i] <= k) {
                ans = max(ans, i + 1);
                int diff = k - pa[i];
                while(j >= 0 && pa[i] + pb[j] > k) {
                    j--;
                }
                if(j >= 0) {
                    ans = max(ans, i + j + 2);
                }
            }
        }
        j = n - 1;
        for(int i = 0; i < m; i++) {
            if(pb[i] <= k) {
                ans = max(ans, i + 1);
                int diff = k - pb[i];
                while(j >= 0 && pb[i] + pa[j] > k) {
                    j--;
                }
                if(j >= 0) {
                    ans = max(ans, i + j + 2);
                }
            }
        }
        cout << ans;
    }
}
