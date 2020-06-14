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

bool isSub(string s, string t, vi& v) {
    int j = 0;
    for(int i = 0; i < t.size(); i++) {
        if(s[j] == t[i]) {   
            j++;
            v[i] = 1;
        }
    }
    return j == s.size();
}

signed main() {
    int t = 1;
    cin >> t;
    while(t--) {
        int n, k;
        cin >> n >> k;
        bool win = true;
        if(k % 3 != 0) {
            if(n % 3 == 0) {
                win = false;
            }
        }
        else {
            n %= (k + 1);
            if(n % 3 == 0 && n != k) {
                win = false;
            }
        }
        (win) ? cout << "Alice" : cout << "Bob";
        cout << endl;
    }
}
