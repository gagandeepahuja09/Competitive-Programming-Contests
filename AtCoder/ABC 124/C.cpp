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
#define N 10000002
#define MOD 1000000007

signed main() {
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    int i = 0, j = 0;
    int ans = 0;
    while(j < n) {
        if(s[j] == '0') {
            while(j < n && s[j] == '0') j++;
            k--;
        }
        else {
            while(j < n && s[j] == '1') j++;
        }
        while(k < 0) {
            if(s[i] == '0') {
                while(i < n && s[i] == '0') i++;
                k++;
            }
            else {
                while(i < n && s[i] == '1') i++;
            }
        }
        ans = max(ans, j - i);
    }
    cout << ans << endl;
}
