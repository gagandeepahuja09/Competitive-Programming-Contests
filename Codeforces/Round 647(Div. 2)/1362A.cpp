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
#define N 1234567
#define MOD 1000000007

signed main() {
    ios::sync_with_stdio(false); 
    cin.tie(0); 
    cout.tie(0);
    int t = 1;
    cin >> t;
    while(t--) {
        int a, b,  x, y,cnt = 0;
        cin >> a >> b;
        x = a; y = b;
        if(a > b) {
            swap(a, b);
        }
        if((b % a == 0 && (b / a) % 2 == 0) || a == b) {
            // cout << a << " " << b << endl;
            while(a != b) {
                a *= 2;
                cnt++;
                if(a >= b)    break;
            }
            // cout << cnt << " ";
            int c0 = 0, c1 = 0, c2 = 0;
            if(cnt >= 3) {
                c0 = (cnt / 3);
                cnt -= (c0 * 3);
            }
            if(cnt >= 2) {
                c1 = (cnt / 2);
            }
            c2 = cnt - (c1 * 2);
            // cout << c0 << " " << c1 << " " << c2 <<  " ";
            if(a != b)  cout << -1;
            else if(x == y)  cout << 0;
            else    cout << (c0 + c1 + c2); 
        }
        else {
            cout << -1;
        }
        cout << endl;
    }
	return 0;
}
