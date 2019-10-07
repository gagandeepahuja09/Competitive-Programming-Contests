#include<bits/stdc++.h>
using namespace std;

#define ll long long int

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    vector<vector<int>> cp(n, vector<int>(26, 0));
    for(int i = 0; i < n; i++) {
        if(i)
            cp[i] = cp[i - 1];
        cp[i][s[i] - 'a']++;    
    }
    int ret = 0;
    for(int i = 1; i < n - 1; i++) {
        int cnt = 0;
        vector<int> l(26, 0), r(26, 0);
        for(int j = 0; j < 26; j++) {
            l[j] = cp[i][j];
        }
        for(int j = 0; j < 26; j++) {
            r[j] = cp[n - 1][j] - cp[i][j];
            if(l[j] && r[j])
                cnt++;
        }
        ret = max(ret, cnt);
    }
    cout << ret << endl;
}
