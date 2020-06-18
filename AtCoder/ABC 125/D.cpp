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
#define N 10000002
#define MOD 1000000007

signed main() {
    string s;
    cin >> s;
    int cnt = 0;
    for(int i = 0; i < s.size(); i++) {
        if(s[i] == '0' && i % 2 == 0) {
            cnt++;
        }
        if(s[i] == '1' && i % 2 == 1) {
            cnt++;
        }
    }
    cout << min(cnt, (int)s.size() - cnt) << endl;
}
