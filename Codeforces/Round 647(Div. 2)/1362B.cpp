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
#define N 1234567
#define MOD 1000000007

signed main() {
    ios::sync_with_stdio(false); 
    cin.tie(0); 
    cout.tie(0);
    int t = 1;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vi a(n);
        map<int, int> mp;
        for(int i = 0; i < n; i++) {
            cin >> a[i];
            mp[a[i]]++;
        }
        int cnt = 0, ans = -1;
        for(int i = 1; i <= 1024; i++) {
            cnt = 0;
            for(int j = 0; j < n; j++) {
                int num = (i ^ a[j]);
                if(mp[num]) cnt++;
            }
            // if(i == 4)  cout << cnt << endl;
            if(cnt == n) {
                ans = i;
                break;
            }
        }
        cout << ans << endl;
    }
	return 0;
}
