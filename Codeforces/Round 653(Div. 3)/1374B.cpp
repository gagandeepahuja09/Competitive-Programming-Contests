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
        int n;
        cin >> n;
        int cnt = 0;
        bool ans = true;
        while(n != 1) {
            if(n % 6 == 0) {
                while(n % 6 == 0) {
                    n /= 6;
                    cnt++;
                    // cout << "yes";
                }
            }
            else if(n % 3 == 0) {
                n *= 2;
                cnt++;
                // cout << "yo";
            }
            else {
                ans = false;
                break;
            }
        }
        if(!ans)    cout << -1 << endl;
        else    cout << cnt << endl;
    }
}
