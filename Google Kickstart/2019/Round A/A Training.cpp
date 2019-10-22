#include<bits/stdc++.h>
using namespace std;

#define ll long long int

int main() {
    ll t, it = 1;
    cin >> t;
    while(t--) {
        ll n, p;
        cin >> n >> p;
        vector<ll> a(n);
        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        vector<ll> sum(n, 0);
        sum[0] = a[0];
        for(int i = 1; i < n; i++) {
            sum[i] = a[i] + sum[i - 1];
        }
        ll ans = INT_MAX;
        for(int i = p - 1; i < n; i++) {
            ll curr;
            if(i == p - 1)
                curr = ((p - 1) * a[i]) - (sum[i - 1]);
            else
                curr = ((p - 1)* a[i]) - (sum[i - 1] - sum[i - p]);
            ans = min(ans, curr);    
        }
        cout << "Case #" << it << ": " << ans << endl;
        it++;
    }
}
