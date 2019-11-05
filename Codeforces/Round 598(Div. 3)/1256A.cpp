#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define MOD 1000000007
#define MAX 2002

int main() {
ll t;
cin >> t; while(t--) {
    ll a, b, n, S;
    cin >> a >> b >> n >> S;
    ll x = S / n;
    a = min(x, a);
    if(a * n + b >= S)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}
}


