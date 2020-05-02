#include <bits/stdc++.h>
using namespace std;

#define int long long int

signed main() {
    int t = 1;
    cin >> t;
    while(t--) {
        int n, k;
        cin >> n >> k;
        set<int> st;
        for(int i = 0; i < n; i++) {
            int x;
            cin >> x;
            st.insert(x);
        }
        if(st.size() > k)
            cout << -1;
        else {
            cout << (n * k) << endl;
            for(int i = 0; i < n; i++) {
                int d = k - st.size();
                for(int s : st)
                    cout << s << " ";
                while(d--)
                    cout << n << " ";
            }
        }
        cout << endl;
    }
	return 0;
}
