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
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<string> a(n);
        for(int i = 0; i < n; i++)
            cin >> a[i];
        bool ans = true;
        for(int i = n - 2; i >= 0; i--) {
            for(int j = n - 2; j >= 0; j--) {
                if(a[i][j] == '1') {
                    if(a[i][j + 1] == '0' && a[i + 1][j] == '0') {
                        ans = false;
                        break;
                    }
                }
            }
        }
        if(ans)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}
