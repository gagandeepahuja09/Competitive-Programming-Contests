#include <bits/stdc++.h>
using namespace std;

int main() {
int t;
cin >> t;
while(t--) {
    int n, x, a, b;
    cin >> n >> x >> a >> b;
    if(a > b)
        swap(a, b);
    int mn = min(x, a - 1);
    a -= mn;
    x -= mn;
    mn = min(b + x, n);
    b = mn;
    cout << abs(b - a) << endl;
}
return 0;
}
