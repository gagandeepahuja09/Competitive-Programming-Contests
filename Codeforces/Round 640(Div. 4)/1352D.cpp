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

signed main() {
    int t = 1;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vi a(n);
        for(int i = 0; i < n; i++)  cin >> a[i];
        int prev = 0, x = 0, y = 0, cnt = 0, i = 0, j = n - 1;
        while(i <= j) {
            int sum = 0;
            bool flag = false;
            while(i <= j && sum <= prev) {
                if(!flag) {
                    flag = true;
                    cnt++;
                }
                sum += a[i];
                x += a[i++];
            }
            // cout << sum << " " << i << " " << j << endl;
            prev = sum;
            sum = 0;
            flag = false;
            while(i <= j && sum <= prev) {
                if(!flag) {
                    flag = true;
                    cnt++;
                }
                sum += a[j];
                y += a[j--];
            }
            prev = sum;
            // cout << sum << " " << i << " " << j << endl;
        }
        cout << cnt << " " << x << " " << y << endl;
    }
}
