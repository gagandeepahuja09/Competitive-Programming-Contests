#include<bits/stdc++.h>
using namespace std;

#define int long long int
#define vi vector<int>
#define vvi vector<vi>
#define pb push_back

const int MOD = 1e9 + 7;

int power(int x, int y) {
    if(y == 0)  return 1ll;
    if(y % 2)   return (x * power(x, y - 1)) % MOD;
    int f = power(x, y / 2);
    return (f * f) % MOD;
}

signed main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        if(n % 4 == 0)  cout << "YES";
        else cout << "NO";
        cout << endl;
    }
}
