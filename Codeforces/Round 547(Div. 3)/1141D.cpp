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

signed main() {
    int t = 1;
    // cin >> t;
    while(t--) {
        int n;
        cin >> n;
        string s, t;
        cin >> s >> t;
        vvi gs(26), gt(26);
        vi vs(n, 0), vt(n, 0);
        vi qs, qt;
        for(int i = 0; i < n; i++) {
            int v1 = s[i] - 'a', v2 = t[i] - 'a';
            if(s[i] == '?') { 
                qs.pb(i);
                vs[i] = -1;
            }
            else    gs[v1].pb(i); 
            if(t[i] == '?') {
                qt.pb(i);
                vt[i] = -1;
            }
            else    gt[v2].pb(i);
        }
        vvi ret;
        for(int i = 0; i < 26; i++) {
            while(gs[i].size() && gt[i].size()) {
                vs[gs[i].back()] = 1;
                vt[gt[i].back()] = 1;
                // cout << i << " " << gs[i].back() << " " << gt[i].back() << endl;
                ret.pb({ gs[i].back(), gt[i].back() });
                gs[i].pop_back();   gt[i].pop_back();
            }
        }
        int k = 0, K = 0;
        for(int i = 0; i < n && k < qs.size(); i++) {
            if(!vt[i]) {
                vt[i] = 1; vs[qs[k]] = 1;
                ret.pb({ qs[k++], i });
            }
        }
        for(int i = 0; i < n && k < qs.size(); i++) {
            if(vt[i] == -1) {
                K++;
                vt[i] = 1; vs[qs[k]] = 1;
                ret.pb({ qs[k++], i });
            }
        }
        k = K;
        for(int i = 0; i < n && k < qt.size(); i++) {
            if(!vs[i] && vt[qt[k]] != 1) {
                vs[i] = 1; vt[qt[k]] = 1;
                ret.pb({ i, qt[k++] });
            }
        }
        for(int i = 0; i < n && k < qt.size(); i++) {
            if(vs[i] == -1 && vt[qt[k]] != 1) {
                vs[i] = 1; vt[qt[k]] = 1;
                ret.pb({ i, qt[k++] });
            }
        }
        cout << ret.size() << endl;
        for(auto i : ret)
            cout << i[0] + 1 << " " << i[1] + 1 << endl;
    }
	return 0;
}
