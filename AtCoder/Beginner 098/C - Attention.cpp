#include<bits/stdc++.h>
using namespace std;

#define ll long long int

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    vector<int> ep(n, 0), es(n, 0);
    if(s[0] == 'E')
        ep[0] = 1;
    for(int i = 1; i < n; i++) {
        ep[i] = ep[i - 1] + (s[i] == 'E');
    }
    if(s[n - 1] == 'E')
        es[n - 1] = 1;
    for(int i = n - 2; i >= 0; i--) {
        es[i] = es[i + 1] + (s[i] == 'E');
    }
    int ans = INT_MAX;
    for(int i = 0; i < n; i++) {
        int countw = (i - (i > 0 ? ep[i - 1] : 0));
        int counte = (i < n - 1 ? es[i + 1] : 0);
        // cout << countw << " " << counte << endl;
        ans = min(ans, countw + counte);
    }
    cout << ans << endl;
}
