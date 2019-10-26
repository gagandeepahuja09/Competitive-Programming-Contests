#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for(int i = 0; i < n; i++)
            cin >> a[i];
        sort(a.begin(), a.end());
        n--;
        int x = n / 4 + 1, y = n / 2 + 1, z = (3 * n) / 4 + 1;
        if(a[x] == a[y] || a[y] == a[z] || (x > 0 && a[x] == a[x - 1]) || a[y] == a[y - 1] || a[z] == a[z - 1])
            cout << "-1" << endl;
        else
            cout << a[x] << " " << a[y]  << " " << a[z] << endl;   
    }
}

