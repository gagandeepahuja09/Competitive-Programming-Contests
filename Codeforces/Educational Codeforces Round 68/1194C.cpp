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
        string s, t, p;
        cin >> s >> t >> p;
        bool ans = true;
        int n = t.size();
        vi v(n, 0);
        if(isSub(s, t, v)) {
            vi c1(26, 0);
            vi c2(26, 0);
            for(int i = 0; i < t.size(); i++) {
                c1[t[i] - 'a']++;
            }
            for(int i = 0; i < s.size(); i++) {
                c1[s[i] - 'a']--;
            }
            for(int i = 0; i < p.size(); i++) {
                c2[p[i] - 'a']++;
            }
            for(int i = 0; i < 26; i++) {
                if(c1[i] > c2[i]) {
                    ans = false;
                }
            }
        }
        else {
            ans = false;
        }
        if(ans) cout << "YES";
        else    cout << "NO";
        cout << endl;
    }
}
