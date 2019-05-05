#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, z, k = 0;
    cin >> n >> z;
    vector<int> a(n);
    for(int i = 0; i < n; i++)
        cin >> a[i];
    sort(a.begin(), a.end());
    for(int i = 0; i < n; i++) {
        if(a[i] - a[k] >= z)
            k++;
    }
    cout << min(k, n / 2) << endl;
}
