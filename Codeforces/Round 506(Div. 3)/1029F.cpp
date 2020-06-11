#include <bits/stdc++.h>
using namespace std;

#define int long long int

signed main() {
    int a, b;
    cin >> a >> b;
    int da = 0, db = 0, ans = 1e18, c = a + b;
    for(int i = 1; i * i <= c; i++) {
        // keep on storing largest factor of a and b <= i
        // this will help in minimizing z and increasing chances of satisfying the condition  
        if(a % i == 0)  da = i;
        if(b % i == 0)  db = i;
        // cout << da << " " << db << endl;
        if(c % i == 0) {
            // cout << i << endl;
            // i >= da and i >= db
            int j = c / i;
            if(j >= a / da || j >= b / db) {
                ans = min(ans, 2 * (i + j));
            }
        }
    }
    cout << ans << endl;
}
