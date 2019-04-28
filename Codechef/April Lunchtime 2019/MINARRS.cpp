#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
 
int main() {
	int t;
	cin>>t;
	while(t--) {
        int n;
        cin >> n;
        vector<int> a(n), s(32);
        for(int i = 0; i < n; i++) {
            cin >> a[i];
            int  num = a[i];
            for (int j = 31; j >= 0; --j) {
    			if(num & 1)
    			    s[j] += num & 1;
    			num >>= 1;
    			if (!n)
    				break;
    	    }
        }
        int mx = 0;
        int res1 = 0, res2 = 0;
    	for (int j = 31; j >= 0; --j) {
    		if (s[j] > n / 2)
    			res1 += 1 << (31 - j);
    	}
    	ll sum1 = 0, sum2 = 0;
    	// cout << "y" <<  res << endl;
    	for(int i = 0; i < n; i++)
    	    sum1 += (a[i] ^ res1);
    	cout << sum1 << endl;    
	}
 }
