#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    int n, k;
    cin >> n >> k >> s;
    int i = 0, j = s.size() - 1;
    string t, temp = s;
    int pos = n;
    for(int i = s.size() - 1; i >= 1; i--) {
        t = s[i] + t;
        if(t == s.substr(0, t.size())) {
            pos = i;
            temp = s.substr(t.size());
        }
    }
    for(int i = 0; i < k - 1; i++) {
        s += temp;
    }
    cout << s << endl;
}
