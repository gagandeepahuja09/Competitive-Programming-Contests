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

signed main() {
    int t = 1;
    cin >> t;
    while(t--) {
        int n; 
        string s;
        cin >> n >> s;
        // min len LIS
        vi v(n);
        for(int i = 0; i < n; i++) v[i] = (n - i);
        for(int i = 0; i < n - 1; i++) {
            int cnt = 0;
            if(s[i] == '<') {
                int idx = i;
                while(i < s.size() && s[i] == '<')
                    i++;
                reverse(v.begin() + idx, v.begin() + i + 1);
                i--;
            }
        }
        for(int i : v)
            cout << i << " ";
        cout << endl;
        for(int i = 0; i < n; i++) v[i] = i + 1;
        for(int i = 0; i < n - 1; i++) {
            int cnt = 0;
            if(s[i] == '>') {
                int idx = i;
                while(i < s.size() && s[i] == '>')
                    i++;
                reverse(v.begin() + idx, v.begin() + i + 1);
                i--;
            }
        }
        for(int i : v)
            cout << i << " ";
        cout << endl;
    }
}
