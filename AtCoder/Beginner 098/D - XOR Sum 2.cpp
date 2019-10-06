#include<bits/stdc++.h>
using namespace std;

#define ll long long int

int main() {
    ll n, l = 0, r = 0, ret = 0;
    cin >> n;
    vector<ll> a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int sum = 0;
    for(l = 0; l < n; l++) {
        while(r < n && ((sum ^ a[r]) == (sum + a[r]))) {
            sum += a[r];
            r++;
        }
        ret += (r - l);
        if(l == r)
            r++;
        else
            sum -= a[l];
    }
    cout << ret << endl;
}
