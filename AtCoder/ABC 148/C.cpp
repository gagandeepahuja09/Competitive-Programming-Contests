#include<bits/stdc++.h>
using namespace std;

#define int long long int
#define vi vector<int>
#define pb push_back
#define vvi vector<vi>

signed main() {
    int a, b;
    cin >> a >> b;
    cout << (a * b) / __gcd(a, b) << endl;
}
