#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
 
int main() {
	int t;
	cin>>t;
	while(t--) {
        int n;
        cin >> n;
        vector<ll> a(n), b(n), mxla(n), mxlb(n), mxra(n), mxrb(n);
        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for(int i = 0; i < n; i++) {
            cin >> b[i];
        }
        mxla[0] = a[0];
        mxlb[0] = b[0];
        for(int i = 1; i < n; i++) {
            mxla[i] = a[i] + mxla[i - 1];
            mxlb[i] = b[i] + mxlb[i - 1];
        }
        mxra[n - 1] = a[n - 1];
        mxrb[n - 1] = b[n - 1];
        for(int i = n - 2; i >= 0; i--) {
            mxra[i] = a[i] + mxra[i + 1];
            mxrb[i] = b[i] + mxrb[i + 1];
        }
        ll ans = max(mxla[n - 1], mxlb[n - 1]);
    	for(int i = 0; i < n - 1; i++) {
    	    ans = max(ans, mxla[i] + mxrb[i + 1]);
    	}
    	cout << ans << endl;
	}
 }
