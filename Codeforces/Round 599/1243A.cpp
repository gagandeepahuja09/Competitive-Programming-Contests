#include <bits/stdc++.h>
using namespace std;
 
#define ll long long int
 
int main() {
    ll t;
    cin >> t;
    while(t--) {
        ll n;
        cin >> n;
        vector<ll> a(n);
        for(int i = 0; i < n; i++)
            cin >> a[i];
        ll ans = 0;    
        for(int i = 0; i < n; i++) {
            ll cnt = 0;
            for(int j = 0; j < n; j++) {
                if(a[j] >= a[i])
                    cnt++;
            }
            cnt = min(a[i], cnt);
            ans = max(ans, cnt);
        }    
        cout << ans << endl;
    }
	return 0;
}
