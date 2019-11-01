#include<bits/stdc++.h>
using namespace std;

#define ll long long int

int main() {
    string s;
    int q;
    cin >> s >> q;
    vector<set<int>> st(26);
    for(int i = 0; i < s.size(); i++) {
        st[s[i] - 'a'].insert(i);
    }
    while(q--) {
        int t;
        cin >> t;
        if(t == 1) {
            int pos; char c;
            cin >> pos >> c;
            pos--;
            char curr = s[pos];
            st[curr - 'a'].erase(pos);
            s[pos] = c;
            st[c - 'a'].insert(pos);
        }
        else {
            int l, r, cnt = 0;
            cin >> l >> r;
            l--; r--;
            for(int i = 0; i < 26; i++) {
                auto p = st[i].lower_bound(l);
                if(p != st[i].end() && *p <= r)
                    cnt++;
            }
            cout << cnt << endl;
        }
    }
}
