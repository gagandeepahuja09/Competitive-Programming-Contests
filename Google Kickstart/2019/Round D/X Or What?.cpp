#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    for(int tc = 1; tc <= t; tc++) {
        cout << "Case #" << tc << ": ";
        int n, q;
        cin >> n >> q;
        set<int> st;
        for(int i = 0; i < n; i++) {
            int tmp, cnt = 0;
            cin >> tmp;
            for(int j = 0; j < 10; j++) {
                if(tmp & (1 << j))
                    cnt++;
            }
            if(cnt % 2 == 1)
                st.insert(i);
        }
        for(int i = 0; i < q; i++) {
            int pos, ele;
            cin >> pos >> ele;
            if(st.find(pos) != st.end()) {
                st.erase(pos);
            }
            int cnt = 0;
            for(int j = 0; j < 10; j++) {
                if(ele & (1 << j))
                    cnt++;
            }
            if(cnt % 2 == 1)
                st.insert(pos);
            if(st.size() % 2 == 0) {
                cout << n << " ";
            }
            else {
                cout << max(n - *st.begin() - 1, *st.rbegin()) << " ";
            }
        }
        cout << endl;
    }
}
