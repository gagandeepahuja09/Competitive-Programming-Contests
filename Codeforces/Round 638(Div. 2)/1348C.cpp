#include <bits/stdc++.h>
using namespace std;

#define int long long int

signed main() {
    int t = 1;
    cin >> t;
    while(t--) {
        int n, k;
        string s;
        cin >> n >> k >> s;
        sort(s.begin(), s.end());
        if(s[0] != s[k - 1]) {
            cout << s[k - 1] << endl;
        }
        else {
            if(s[k] != s[n - 1]) {
                cout << s.substr(k - 1) << endl;
            }
            else {
                for(int i = 0; i < n; i += k)
                    cout << s[i];
                cout << endl;
            }
        }
    }
	return 0;
}
