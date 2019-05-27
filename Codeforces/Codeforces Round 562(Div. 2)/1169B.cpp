#include<bits/stdc++.h>
using namespace std;

int n, m, a[300000], b[300000];

bool check(int x, int y) {
    for(int i = 1; i < m; i++) {
        if(a[i] == x || a[i] == y || b[i] == x || b[i] == y) 
            continue;
        if(y == -1)
            return check(x, a[i]) || check(x, b[i]);
        else
            return 0;
    }
    return 1;
}

int main() {
    cin >> n >> m;
    for(int i = 0; i < m; i++) {
        cin >> a[i] >> b[i];
    }
    if(check(a[0], -1) || check(b[0], -1) 
    || check(a[0], b[0])) 
        cout << "YES";
    else
        cout << "NO";
}
