#include<bits/stdc++.h>
using namespace std;

#define int long long int
#define vi vector<int>
#define vvi vector<vi>
#define pb push_back

signed main() {
    int n;
    cin >> n;
    vi a(n);
    int mn = INT_MAX, cnt = 0;
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        mn = min(mn, a[i]);
        if(a[i] == mn) {
            cnt++;
        }
    }
    cout << cnt;
}
