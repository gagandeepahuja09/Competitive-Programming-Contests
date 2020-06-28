#include<bits/stdc++.h>
using namespace std;

#define int long long int
#define vi vector<int>
#define vvi <vector<vector<int>>

// int power(int x, int y) {
//     if(y == 0)  return 1;
//     if(y % 2)   return x * power(y - 1);
//     int f = power(x, y / 2);
//     return f * f;
// }

const int MOD = 7901;

signed main() {
    int t = 1;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        stack<int> stk;
        int cnt = 0;
        for(int i = 0; i < s.size(); i++) {
            if(s[i] == '(') {
                stk.push(s[i]);
            }
            else if(s[i] == ')') {
                if(!stk.size()) cnt++;
                else stk.pop();
            }
        }
        cnt += stk.size();
        cout << (cnt + 1) / 2 << endl;
    }
}
