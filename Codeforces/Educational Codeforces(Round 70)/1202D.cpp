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

signed main() {
    int t;
    cin >> t;
    while(t--) {
        string s = "133";
        int n;
        cin >> n;
        int low = 2, high = n, ans = 2;
        while(low <= high) {
            int mid = low + (high - low) / 2;
            if((mid * (mid - 1)) / 2 <= n) {
                ans = mid;
                low = mid + 1;
            }
            else {
                high = mid - 1;
            }
        }
        int diff = n - (ans * (ans - 1) / 2);
        s = "133";
        for(int i = 0; i < diff; i++)
            s += "7";
        for(int i = 0; i < ans - 2; i++)
            s += "3";
        s += "7";
        cout << s << endl;
    }
}
