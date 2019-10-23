#include<bits/stdc++.h>
using namespace std;

#define ll long long int

int main() {
    ll t, it = 1;
    cin >> t;
    while(t--) {
        ll n, r, c, sr, sc;
        cin >> n >> r >> c >> sr >> sc;
        sr--; sc--;
        vector<vector<bool>> vis(r, vector<bool>(c, false));
        vis[sr][sc] = 1;
        for(int i = 0; i < n; i++) {
            char c;
            cin >> c;
            if(c == 'E') {
                sc++;
                while(vis[sr][sc] == 1) {
                    sc++;
                }
            }
            else if(c == 'W') {
                sc--;
                while(vis[sr][sc] == 1) {
                    sc--;
                }
            }
            else if(c == 'N') {
                sr--;
                while(vis[sr][sc] == 1) {
                    sr--;
                }
            }
            else if(c == 'S') {
                sr++;
                while(vis[sr][sc] == 1) {
                    sr++;
                }
            }
            vis[sr][sc] = 1;
        }
        cout << "Case #" << it << ": " << sr + 1 << " " << sc + 1 << endl;
        it++;
    }
}
