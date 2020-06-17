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

int f(int a) {
    int ans = 0;
    int c = (a + 1) / 2;
    ans = c % 2;
    if(a % 2 == 1) {
        return ans;    
    }
    return a ^ ans;
}
    
signed main() {
    int a, b;
    cin >> a >> b;
    if(a > b)   swap(a, b);
    if(a == 0)  
        cout << f(b);
    else
        cout << (f(b) ^ f(a - 1));
}
