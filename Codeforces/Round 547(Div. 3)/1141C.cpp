#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define vi vector<int>
#define vii vector<vi>
#define read(a)  for(int i = 0; i < n; i++) cin >> a[i];
#define print(a)  for(int i = 0; i < n; i++) cout << a[i] << " ";
#define pb push_back
#define pql priority_queue<int>
#define pqs priority_queue<int, vi, greater<int>>
#define pqlv priority_queue<vi>
#define pqsv priority_queue<vi, vvi, greater<vi>>
#define endl '\n'

signed main() {
    int t = 1;
    // cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int x = 1;
        vi a(n - 1); 
        read(a);
        vi v;
        v.pb(1);
        int mn = 1;
        for(int i = 0; i < n - 1; i++) {
            int temp = v.back();
            v.pb(temp + a[i]);
            mn = min(mn, v.back());
        }
        int temp = (-mn) + 1;
        vi cnt(n + 1, 0);
        for(int i = 0; i < n; i++) {
            v[i] += temp;
            if(v[i] >= 1 && v[i] <= n)
                cnt[v[i]]++;
        }
        bool flag = true;
        for(int i = 1; i <= n; i++) {
            if(cnt[i] != 1) {
                flag = false;
            }
        }
        if(!flag)   cout << -1;
        else print(v);
        cout << endl;
    }
	return 0;
}
