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

int bs(int n) {
    int low = 0, high = n, ans = 1;
    while(low <= high) {
        int mid = low + (high - low) / 2;
        if(((mid * (mid + 1)) / 2) <= n) {
            ans = mid;
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }
    return ans;
}

signed main() {
    int n;
    cin >> n;
    int ans = 0;
    for(int i = 2; i * i <= n; i++) {
        int cnt = 0;
        while(n % i == 0) {
            n /= i;
            cnt++;
        }
        if(cnt) {
            ans += bs(cnt);
        }    
    }
    // will happen in case of prime
    if(n != 1)  ans++;
    cout << ans << endl;
}
