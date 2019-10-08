#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define N 1000001

int main() {
    int n, k, q;
    cin >> n >> k >> q;
    vector<int> v(n, k - q);
    for(int i = 0; i < q; i++) {
        int u;
        cin >> u;
        v[u - 1]++;
    }
    for(int i = 0; i < n; i++) {
        if(v[i] > 0)
            cout << "Yes";
        else
            cout << "No";
        cout << endl;    
    }
}
