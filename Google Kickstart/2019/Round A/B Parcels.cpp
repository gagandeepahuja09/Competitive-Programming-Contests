#include<bits/stdc++.h>
using namespace std;

#define ll long long int

int main() {
    ll t, it = 1;
    cin >> t;
    while(t--) {
        int r, c;
        cin >> r >> c;
        vector<string> s;
        for(int i = 0; i < r; i++) {
            string temp;
            cin >> temp;
            s.push_back(temp);
        }
        int ans = 0;
        vector<vector<int>> pre(r, vector<int>(c, 0));
        for(int i = 0; i < r; i++) {
            for(int j = 0; j < c; j++) {
                if(s[i][j] == '0') {
                    int mn = INT_MAX;
                    for(int k = 0; k < r; k++) {
                        for(int l = 0; l < c; l++) {
                            if(s[k][l] == '1') {
                                mn = min(mn, abs(k - i) + abs(l - j));
                            }
                        }
                    }
                    pre[i][j] = mn;
                    ans = max(ans, pre[i][j]);
                }
            }
        }
        
        for(int i = 0; i < r; i++) {
            for(int j = 0; j < c; j++) {
                if(s[i][j] == '0') {
                    int mx = 0;
                    for(int k = 0; k < r; k++) {
                        for(int l = 0; l < c; l++) {
                            if(s[k][l] == '0' && !(k == i && l == j)) {
                                int mn = min(pre[k][l], abs(k - i) + abs(l - j));
                                mx = max(mx, mn);
                            }
                            // cout << pre[k][l] << " ";
                        }
                        // cout << endl;
                    }
                    ans = min(ans, mx);
                    // return 0;
                }
            }
        }
        
        cout << "Case #" << it << ": " << ans << endl;
        it++;
    }
}
