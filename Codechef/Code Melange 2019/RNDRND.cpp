#include <bits/stdc++.h>
using namespace std;

int n, m;
bool house[1005];
bool vis[1005];

int calc(int x) {
    memset(vis, false, sizeof vis);
    vis[0] = true;
    int cnt = 1, pos = 0, rem = m;
    if(house[0])
        rem--;
    while(rem > 0) {
        pos = (pos + x) % n;
        if(vis[pos])
            return n;
        cnt++;
        if(house[pos])
            rem--;
    }
    return cnt;
}

int main() {
    /*int t;
    cin >> t;
    while(t--) {
        
    }*/
    cin >> n >> m;
    memset(vis, 0, sizeof vis);
    for(int i = 0; i < m; i++) {
        int h;
        cin >> h;
        house[h - 1] = true;
    }
    int ret = n;
    for(int x = 1; x < n; x++) {
        ret = min(ret, calc(x));
    }
    cout << ret << endl;
}
