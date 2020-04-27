#include <bits/stdc++.h>
using namespace std;

#define int long long int

string l(string s) {
    return s.substr(1) + s[0];
}

string r(string s) {
    return s.back() + s.substr(0, s.size() - 1);
}

signed main() {
    int t;
    cin >> t;
    while(t--) {
        string s;
        cin >> s;
        if(l(s) == r(s)) {
            cout << "YES";
        }
        else
            cout << "NO";
        cout << endl;
    }
}
