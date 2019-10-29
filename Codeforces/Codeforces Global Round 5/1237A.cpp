#include<bits/stdc++.h>
using namespace std;

#define ll long long int

int main() {
    // int t;
    // cin >> t;
    // while(t--) {
        ll n;
        cin >> n;
        vector<ll> a(n);
        for(int i = 0; i < n; i++)
            cin >> a[i];
        ll flag = 1;    
        for(int i = 0; i < n; i++) {
            if(a[i] % 2 == 0)
                cout << a[i] / 2;
            else {
                cout << (a[i] + flag) / 2;
                flag *= -1;
            }   
            cout << endl;
        }    
    // }
}
