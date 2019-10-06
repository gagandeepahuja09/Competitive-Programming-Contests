#include<bits/stdc++.h>
using namespace std;

#define ll long long int

int main() {
    ll w, h, x, y;
    cin >> w >> h >> x >> y;
    cout << w*h / 2.0 << " " << (2 * x == w && 2 * y == h) << endl;
}
