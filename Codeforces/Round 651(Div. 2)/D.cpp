#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define vi vector<int>
#define vvi vector<vi>
#define read(a)  for(int i = 0; i < n; i++) cin >> a[i];
#define print(a)  for(int i = 0; i < n; i++) cout << a[i] << " ";
#define pb push_back
#define pql priority_queue<int>
#define pqs priority_queue<int, vi, greater<int>>
#define pqlv priority_queue<vi>
#define pqsv priority_queue<vi, vvi, greater<vi>>
// #define endl '\n'
#define N 10000002
#define MOD 1000000007

bool ok(vi& a,int x, int w, int k) {
    int cnt = 0;
    for(int i = 0; i < a.size(); i++) {
        if(w == 0) {
            w = 1;
            cnt++;
        }
        else if(a[i] <= x) {
            w = 0;
            cnt++;
        }
    }
    return cnt >= k;
}

signed main() {
    int t = 1;
    // cin >> t;
    while(t--) {
        int n, k;
        cin >> n >> k;
        vi a(n);
        read(a);
        int low = 1, ans = *max_element(a.begin(), a.end()), high = ans;
        while(low <= high) {
            int mid = (low + high) / 2;
            if(ok(a, mid, 1, k) || ok(a, mid, 0, k)) {
                ans = mid;
                high = mid - 1;
            }
            else {
                low = mid + 1;
            }
        }
        cout << ans << endl; 
    }
}
