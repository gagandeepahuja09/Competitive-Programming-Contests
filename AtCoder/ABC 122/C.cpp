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
    int n, q;
    cin >> n >> q;
    string s;
    cin >> s;
    vi c(n, 0);
    for(int i = 1; i < n; i++) {
        if(s[i] == 'C' && s[i - 1] == 'A') {
            c[i] = c[i - 1] + 1;
        }
        else {
            c[i] = c[i - 1];
        }
    }
    while(q--) {
        int l, r;
        cin >> l >> r;
        l--; r--;
        cout << c[r] - c[l];
        cout << endl;
    }
}
