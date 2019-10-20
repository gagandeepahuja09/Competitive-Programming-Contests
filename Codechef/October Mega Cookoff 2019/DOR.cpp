#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main() {
    ll t;
    cin >> t;
    while(t--) {
        ll l, r;
        cin >> l >> r;
        ll ans = 0ll;
        for(ll i = 63; i >= 0; i--) {
            if((r & (1ll << i))  && (l & (1ll << i))) {
                ans += (1ll << i);
            }
            else if((r & (1ll << i))) {
                ans += (1ll << i);
                ll curr = (1ll << i) - 1;
                ans += curr;
                break;
            }
        }
        cout << ans << endl;
    }
}

