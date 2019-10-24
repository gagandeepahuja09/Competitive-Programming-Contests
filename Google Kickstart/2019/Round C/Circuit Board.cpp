#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    for(int tc = 1; tc <= t; tc++) {
        cout << "Case #" << tc << ": ";
        int r, c, K, ans = 0;
        cin >> r >> c >> K;
        vector<vector<int>> v(r, vector<int>(c));
        int diff[r][c][c];
        for(int i = 0; i < r; i++) {
            for(int j = 0; j < c; j++) {
                cin >> v[i][j];
            }
        }
        for(int i = 0; i < r; i++) {
            for(int j = 0; j < c; j++) {
                int mx = v[i][j], mn = v[i][j];
                for(int k = j; k < c; k++) {
                    mx = max(mx, v[i][k]);
                    mn = min(mn, v[i][k]);
                    diff[i][j][k] = mx - mn;
                }
            }
        }
        for(int j = 0; j < c; j++) {
            for(int k = j; k < c; k++) {
                int d = 0;
                for(int i = 0; i < r; i++) {
                    if(diff[i][j][k] > K) {
                        ans = max(ans, d * (k - j + 1));
                        d = 0;
                    }
                    else
                        d++;
                }
                ans = max(ans, d * (k - j + 1));
            }
        }
        cout << ans << endl;
    }
}
