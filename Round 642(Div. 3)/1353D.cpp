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

int val;

void f(int x, int y, vi& a) {
    pqlv pq;
    pq.push({ y - x + 1, -x, y });
    while(!pq.empty()) {
        auto f = pq.top(); pq.pop();
        int i = -f[1], j = f[2];
        if(i > j) {
            continue;
        }
        int mid = (i + j) / 2;
        if((j - i + 1) % 2 == 0)
            mid = (i + j - 1) / 2;
        a[mid] = val++;
        pq.push({ j - mid, -(mid + 1), j });
        pq.push({ mid - i, -i, mid - 1 });
    }
}

signed main() {
    int t = 1;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vi a(n + 1);
        val = 1;
        f(1, n, a);
        for(int i = 1; i <= n; i++)
            cout << a[i] << " ";
        cout << endl;
    }
}
 
