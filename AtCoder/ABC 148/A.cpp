#include<bits/stdc++.h>
using namespace std;

#define int long long int
#define vi vector<int>
#define pb push_back
#define vvi vector<vi>

signed main() {
    int a, b;
    vi v(4, 0);
    cin >> a >> b;
    v[a] = 1; v[b] = 1;
    for(int i = 1; i <= 3; i++) {
        if(!v[i]) {
            cout << i << endl;
            return 0;
        }
    }

}
