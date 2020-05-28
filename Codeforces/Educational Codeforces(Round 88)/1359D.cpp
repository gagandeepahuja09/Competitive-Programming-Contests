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
#define endl '\n'
#define N 300002

int get(int x, vi a) {
    int ans = INT_MIN;
    for(int i = 0; i < a.size(); i++) {
        if(a[i] > x)
            continue;
        int j = i, curr = 0;
        while(j < a.size()) {
            if(a[j] <= x) {
                curr += a[j];
            }
            else
                break;
            ans = max(ans, curr);
            if(curr < 0)
                curr = 0;
            j++;
        }
        i = j;
    }
    return ans - x;
}
 
signed main() {
    ios::sync_with_stdio(false); 
    cin.tie(0); 
    cout.tie(0);
    int t = 1;
    // cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vi a(n);
        read(a);
        int ans = 0;
        for(int x = -30; x <= 30; x++) {
            ans = max(ans, get(x, a));
        }
        cout << ans << endl;
    }
	return 0;
}
