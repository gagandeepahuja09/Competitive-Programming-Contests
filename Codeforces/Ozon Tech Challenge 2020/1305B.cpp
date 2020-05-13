#include <bits/stdc++.h>
using namespace std;
 
#define int long long int
#define vi vector<int>
#define vvi vector<vi>
#define read(a)  for(int i = 0; i < n; i++) cin >> a[i];
#define print(a)  for(int i = 0; i < n; i++) cout << a[i] << " ";
#define pb push_back
#define ins insert
#define pql priority_queue<int>
#define pqs priority_queue<int, vi, greater<int>>
#define pqlv priority_queue<vi>
#define pqsv priority_queue<vi, vvi, greater<vi>>
#define endl '\n'
#define MOD 998244353

vvi adj;

signed main() {
    int t = 1;
    // cin >> t;
    while(t--) {
       string s;
       cin >> s;
       vi left, right;
       int l = 0, r = s.size() - 1;
       while(l < r) {
           while(l < r && s[l] == ')')  l++;
           while(l < r && s[r] == '(')  r--;
           if(l < r) {
               left.pb(l + 1);
               right.pb(r + 1);
               l++; r--;
           }
       } 
       reverse(right.begin(), right.end());
       if(!left.size()) {
           cout << 0 << endl;
           return 0;
       }
        cout << 1 << endl;
        cout << 2 * left.size() << endl;
        for(int i : left)
            cout << i << " ";
        for(int i : right)
            cout << i << " ";
    }
}
