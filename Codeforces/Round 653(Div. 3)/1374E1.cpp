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
        int x, y, n;
        cin >> x >> y >> n;
        int mx = n % x, ans = n;
        n += (y - mx);
        if(n > ans) {
            n -= x;
        }
        cout << n << endl;
    }
}
