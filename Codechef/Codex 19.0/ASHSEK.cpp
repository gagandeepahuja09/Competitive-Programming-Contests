#include<bits/stdc++.h>
using namespace std;

#define ll long long int

int main() {
    int t;
    cin >> t;
    while(t--) {
        ll n;
        cin >> n;
        if(n % 2 == 1)
            cout << 0 << endl;
        else    
            cout << (n / 4) - (n % 4 == 0) << endl;
    }
}
