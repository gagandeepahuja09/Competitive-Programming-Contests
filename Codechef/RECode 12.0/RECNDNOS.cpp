#include <bits/stdc++.h>
using namespace std;

#define int long long int

signed main() {
    int t;
    cin >> t;
    while(t--) {
        map<int, int> mp;;
        int n;
        cin >> n;
        vector<int> a(n); 
        for(int i = 0; i < n; i++) {
            cin >> a[i];
            mp[a[i]]++;
        }
        int mx = 0, ans = 0;
        for(auto it : mp) {
            int prev = -2, cnt = 0;
            for(int i = 0; i < n; i++) {
                if(a[i] == it.first && i - prev > 1) {
                    cnt++;
                    prev = i;
                }
            }
            if(cnt > mx) {
                mx = cnt;
                ans = it.first;
            }
        }
        cout << ans << endl;
    }
}
