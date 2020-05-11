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
    int n;
    cin >> n;
    vi a(n);
    read(a);
    map<int, int> mp, mp2;
    int ans = 0;
    for(int i = 0; i < n; i++) {
        mp2[a[i]] = i + 1;
        if(!mp[a[i]])
            mp[a[i]] = i + 1;
    }
    int depth = 0;
    for(int i = 0; i < n; i++) {
        if(i + 1 == mp[a[i]])
            depth++;
        if(i + 1 == mp2[a[i]])
            depth--;
        if(!depth) {
            if(ans == 0)    ans = 1;
            else    ans = (ans * 2) % MOD;
        }
    }
    cout << ans << endl;
}
