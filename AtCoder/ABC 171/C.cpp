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
    int n;
    cin >> n;
    n--;
    string s;
    int cnt = 1;
    while(n >= 0) {
        int r = n % 26;
        // cout << r << endl;
        // if(r == 0) r = 26;
        s += (r + 'a');
        // if(r == 26) n += 26;
        n /= 26;
        n -= (cnt);
    }
    reverse(s.begin(), s.end());
    cout << s << endl;
}
