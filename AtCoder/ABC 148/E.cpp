#include<bits/stdc++.h>
using namespace std;

#define int long long int
#define vi vector<int>
#define pb push_back
#define vvi vector<vi>

signed main() {
    int n;
    cin >> n;
    if(n % 2) {
        cout << 0 << endl;
        return 0;
    }
    int cnt = 0;
    for(int i = 10; i <= n; i *= 5) {
        cnt += (n / i);
    }
    cout << cnt << endl;
}
