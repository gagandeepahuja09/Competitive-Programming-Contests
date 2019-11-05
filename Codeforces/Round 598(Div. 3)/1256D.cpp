#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define MOD 1000000007
#define MAX 2002

int main() {
ll t;
cin >> t; while(t--) {
    ll n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    vector<ll> v;
    for(int i = 0; i < s.size(); i++) {
        if(s[i] == '0')
            v.push_back(i);
    }
    map<int, int> mp;
    ll temp = 0;
    for(int i = 0; i < v.size(); i++) {
        ll sub = min(v[i] - temp, k);
        k -= sub;
        temp++;
        v[i] -= sub;
        if(k == 0)
            break;
    }
    string ans;
    for(int i = 0; i < s.size(); i++) {
        ans += '1';
    }
    for(int i = 0; i < v.size(); i++) {
        ans[v[i]] = '0';
    }
    cout << ans << endl;
}
}
