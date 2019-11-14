#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main() {
int t;
cin >> t;
while(t--) {
    ll x, y;
    cin >> x >> y;
    bool ans = true;
    unordered_map<int, int> vis;
    while(x < y) {
        vis[x]++;
        if(x % 2 == 0) {
            x = (3 * x) / 2;
        }
        else {
            x = (3 * (x - 1)) / 2;
        }
        if(vis[x]) {
            ans = false; break;   
        }
    }
    if(ans)
        cout << "YES";
    else
        cout << "NO";
    cout << endl;
}
}
