#include<bits/stdc++.h>
using namespace std;

#define ll long long int

int main() {
    string s;
    cin >> s;
    int ans = s.size();
    for(int i = 0; i < s.size(); i++) {
        string s1 = s.substr(i, 1);
        string s2 = s.substr(i + 1, 1);
        if(s1 == s2) {
            ans--;
            i += 2;
        }
    }
    cout << ans << endl;
}
