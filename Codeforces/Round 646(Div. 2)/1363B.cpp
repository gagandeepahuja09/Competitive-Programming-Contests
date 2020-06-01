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
 
signed main() {
    ios::sync_with_stdio(false); 
    cin.tie(0); 
    cout.tie(0);
    int t = 1;
    cin >> t;
    while(t--) {
        string s;
        cin >> s;
        vi v;
        int n = s.size();
        int c0 = 0, c1 = 0;
        for(int i = 0; i < s.size(); i++) {
          if(s[i] == '0') c0++;
          else  c1++;
        }
        int res = min(c0, c1);
        int cc0 = 0, cc1 = 0;
        for(int i = 0; i < n; i++) {
            if(s[i] == '0') { 
                cc0++;
                c0--;
            }
            else { 
                cc1++;
                c1--;
            }
            int x = (i + 1 - cc0) + (n - i - c1 - 1);
            int y = (i + 1 - cc1) + (n - i - c0 - 1);
            res = min(res, min(x, y));
        }
        cout << res << endl;
    }
	return 0;
}
