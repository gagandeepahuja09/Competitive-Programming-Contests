#include<bits/stdc++.h>
using namespace std;

#define int long long int
#define vi vector<int>
#define vvi vector<vi>
#define pb push_back

// int power(int x, int y) {
//     if(y == 0)  return 1;
//     if(y % 2)   return x * power(y - 1);
//     int f = power(x, y / 2);
//     return f * f;
// }

const int MOD = 7901;

signed main() {
    int t = 1;
    // cin >> t;
    while(t--) {
        int n, m;
        cin >> n >> m;
        vvi a(n, vi(3));
        vi both, x, y;
        for(int i = 0; i < n; i++) {
            cin >> a[i][0] >> a[i][1] >> a[i][2];
            if(a[i][1] && a[i][2]) {
                both.pb(a[i][0]);
            }
            else if(a[i][1]) {
                x.pb(a[i][0]);
            }
            else if(a[i][2]) {
                y.pb(a[i][0]);
            }
        }
        sort(x.begin(), x.end()); sort(y.begin(), y.end()); sort(both.begin(), both.end());
        int ans = 1e18;
        vi xsum, ysum; int sum = 0;
        
        xsum.pb(0); ysum.pb(0);
        for(int i = 0; i < x.size(); i++) {
            sum += x[i];
            xsum.pb(sum);
        } 
        sum = 0;
        for(int i = 0; i < y.size(); i++) {
            sum += y[i];
            ysum.pb(sum);
        } 
        sum = 0;
        for(int i = 0; i <= both.size(); i++) {
            int temp = m - i;
            if(i > 0)
                sum += both[i - 1];
            if(temp >= 0 && temp < (int)xsum.size() && temp < (int)ysum.size()) {
                ans = min(ans, sum + xsum[temp] + ysum[temp]);
            }
        }
        if(ans == 1e18) cout << -1 << endl;
        else    cout << ans << endl;
    }
}
