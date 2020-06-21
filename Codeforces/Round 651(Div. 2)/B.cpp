#include<bits/stdc++.h>
using namespace std;

#define int long long int
#define vi vector<int>
#define pb push_back
#define vvi vector<vi>


signed main() {
    int t = 1;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vi a(2 * n);
        vi o;
        vi e;
        for(int i = 0; i < 2 * n; i++)  {
            cin >> a[i];
            if(a[i] % 2)    o.pb(i + 1);
            else    e.pb(i + 1);
        }
        int k = 0;
        while(k < n - 1) {
            if(o.size() >= 2) {
                cout << o.back() << " "; o.pop_back();
                cout << o.back() << endl; o.pop_back();
                k++;
            }
            if(k >= n - 1)  break;
            if(e.size() >= 2) {
                cout << e.back() << " "; e.pop_back();
                cout << e.back() << endl; e.pop_back();
                k++;
            }
        }
    }
}
