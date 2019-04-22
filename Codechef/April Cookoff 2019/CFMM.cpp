#include <bits/stdc++.h>
using namespace std;

int n, m;
bool house[1005];
bool vis[1005];

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int mn = INT_MAX;
        int cc, co, cd, ch, ce, cf;
        cc = co = cd = ch = ce = cf = 0;
        for(int i = 0; i < n; i++) {
            string s;
            cin >> s;
            for(int i = 0; i < s.size(); i++) {
                if(s[i] == 'c')
                    cc++;
                if(s[i] == 'o')
                    co++;
                if(s[i] == 'd')
                    cd++;
                if(s[i] == 'e')
                    ce++;
                if(s[i] == 'f')
                    cf++;
                if(s[i] == 'h')
                    ch++;
            }
        }
        cc /= 2; ce /= 2;
        mn = min(mn, cc); mn = min(mn, co); mn = min(mn, cd); mn = min(mn, ce); 
        mn = min(mn, cf); mn = min(mn, ch); 
        cout << mn << endl;
    }
}
