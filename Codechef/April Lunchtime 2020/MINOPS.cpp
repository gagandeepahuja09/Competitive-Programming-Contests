#include<bits/stdc++.h>
using namespace std;

#define ll long long int
 
int main() {
    ll t;
    cin >> t;
    while(t--) {
        string s, r;
        ll l = 0;
        cin >> s >> r;
        vector<ll> v, width;
        for(int i = 0; i < s.size(); i++) {
            if(s[i] != r[i]) {
                v.push_back(i);
                l++;
            }
        }
        if(v.size() <= 1) {
            cout << v.size() << endl;
            continue;
        }
        for(int i = 1; i < v.size(); i++) {
            width.push_back(v[i] - v[i - 1]);
        }
        sort(width.begin(), width.end());
        ll k = width.size() + 1;
        ll ans = l * k;
        for(int i = 0; i < width.size(); i++) {
            l += (width[i] - 1);
            k--;
            ans = min(ans, l * k);
        }
        cout << ans << endl;
    }
}
