#include <bits/stdc++.h>
using namespace std;

#define int long long int 

signed main() {
    string s;
    cin >> s;
    reverse(s.begin(), s.end());
    int sum = 0, base = 1, ans = 0;
    map<int, int> cnt;
    cnt[0]++;
    for(int i = 0; i < s.size(); i++) {
        sum += (base * (s[i] - '0'));
        sum %= 2019;
        base *= 10;
        base %= 2019;
        ans += cnt[sum];
        cnt[sum]++;
    }
    cout << ans << endl;
}
