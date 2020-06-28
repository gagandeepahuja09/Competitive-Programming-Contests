#include<bits/stdc++.h>
using namespace std;

#define int long long int
#define vi vector<int>
#define vvi <vector<vector<int>>

// int power(int x, int y) {
//     if(y == 0)  return 1;
//     if(y % 2)   return x * power(y - 1);
//     int f = power(x, y / 2);
//     return f * f;
// }

const int MOD = 7901;

signed main() {
    int t = 1;
    cin >> t;
    while(t--) {
        int n, x;
        cin >> n >> x;
        vi a(n);
        for(int i = 0; i < n; i++)  {
            cin >> a[i];
            a[i] %= x;
        }
        sort(a.begin(), a.end());
        int ans = 1, flag = false, mx = 0, cnt = 0, ele;
        for(int i = 0; i < a.size(); i++) {
            if(a[i]) {
                flag = true;
            }
            if(a[i] && i > 0 && a[i] == a[i - 1]) {
                cnt++;
            }
            if(a[i] && (i == 0 || a[i] != a[i - 1])) {
                cnt = 1;
            }
            if(cnt > mx) {
                mx = cnt;
                ele = a[i];
            }
        }
        // cout << mx << " " << ele << " " << x << endl;
        if(!flag)   ans--;
        if(flag)
            ans += ((mx - 1) * x);
        if(flag)
            ans += (x - ele);
        cout << ans << endl;
    }
}
