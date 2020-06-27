#include<bits/stdc++.h>
using namespace std;

#define int long long int
#define vi vector<int>

const int N = 1e7;

int sp[N + 1];

signed main() {
    int t = 1;
    //cin >> t;
    while(t--) {
        int n, ans = 0;
        cin >> n;
        for(int i = 2; i <= n; i++) {
            if(!sp[i]) {
                for(int j = i; j <= n; j += i) {
                    sp[j] = i;
                }
            }
        }
        sp[1] = 1;
        for(int i = 1; i <= n; i++) {
            int temp = i, curr = 1;
            while(temp != 1) {
                int cnt = 0;
                int p = sp[temp];
                while(temp > 1 && temp % p == 0) {
                    temp /= p; cnt++;
                }
                // cout << p << " " << cnt << endl;
                curr *= (cnt + 1);
            }
            // cout << curr << endl;
            ans += (i * (curr));
        }
        cout << ans;
    }
}
