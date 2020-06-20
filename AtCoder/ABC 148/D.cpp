#include<bits/stdc++.h>
using namespace std;

#define int long long int
#define vi vector<int>
#define pb push_back
#define vvi vector<vi>

signed main() {
    int n;
    cin >> n;
    vi a(n);
    vi cnt(n + 1, 0);
    int mx = 0;
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        if(a[i] > n)    continue;
        if(a[i] == 1) {
            cnt[a[i]] = 1;
        }
        else if(cnt[a[i] - 1]) {
            cnt[a[i]] = cnt[a[i] - 1] + 1;
        }
        // cout << cnt[a[i]] << endl;
        mx = max(mx, cnt[a[i]]);
    }
    if(!mx) 
        cout << -1 << endl;
    else
        cout << n - mx << endl;
}
