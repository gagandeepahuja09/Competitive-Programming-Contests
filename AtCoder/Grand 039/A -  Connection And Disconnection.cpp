#include<bits/stdc++.h>
using namespace std;

#define ll long long int

ll f(string s) {
    int cnt = 0, c = 0;
    char prev = '#';
    for(int i = 0; i < s.size(); i++) {
        if(prev == '#' || s[i] == prev) {
            c++;
            if(c % 2 == 0)
                cnt++;
        }
        else {
            c = 1;
        }
        prev = s[i];
    }
    return cnt;
}

bool isSame(string s) {
    for(int i = 0; i < s.size(); i++) {
        if(s[i] != s[0])
            return false;
    }
    return true;
}

int main() {
    string s; ll k;
    cin >> s >> k;
    if(isSame(s)) {
        cout << k * s.size() / 2 << endl;
        return 0;
    }
    ll first = f(s);
    ll diff = f(s + s) - first;
    ll ans = first + diff * (k - 1);
    cout << ans << endl;
    return 0;
}
