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
#define N 300002
 
signed main() {
    ios::sync_with_stdio(false); 
    cin.tie(0); 
    cout.tie(0);
    int t = 1;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        string a, b;
        cin >> a >> b;
        vi ca(26, 0), cb(26, 0), pa(26, 0);
        vvi v(26);
        for(int i = 0; i < n; i++) {
            ca[a[i] - 'a']++;
            cb[b[i] - 'a']++;
            pa[a[i] - 'a'] = i;
        }
        bool flag = true;
        for(int i = 0; i < 26; i++) {
            if(cb[i] && !ca[i]) {
                flag = false;
            }
        }
        map<int, vi> mp;
        for(int i = 0; i < n; i++) {
            int x = a[i] - 'a', y = b[i] - 'a';
            if(x != y) {
                if(x < y)
                    flag = false;
                if(ca[y]) {
                    mp[y].pb(i);
                }
                else
                    flag = false;
            }
        }
        if(flag) {
            cout << mp.size() << endl;
            for(auto i  = mp.rbegin(); i != mp.rend(); i++) {
                int p = i -> first;
                vi v = i -> second;
                cout << v.size() + 1 << " ";
                cout << pa[p] << " ";
                for(int x : v)
                    cout << x << " ";
                cout << endl;
            }
        }
        else 
            cout << -1 << endl;
    }
	return 0;
}
