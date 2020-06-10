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
        int n;
        cin >> n;
        vi a(n);
        int c = 0, cnt = 0;
        for(int i = 0; i < n; i++)  cin >> a[i];
        vi b(n);
        for(int i = 0; i < n; i++) { 
            cin >> b[i];
            if(b[i] == 1)   cnt++;
            else    c++;
        }
        bool ans = true;
        vi x = a;
        sort(x.begin(), x.end());
        for(int i = 0; i < n; i++) {
            if(x[i] != a[i])
                ans = false;
        }
        if(ans || (cnt && c)) cout << "YES";
        else    cout << "NO";
        cout << endl;
    }
	return 0;
}
