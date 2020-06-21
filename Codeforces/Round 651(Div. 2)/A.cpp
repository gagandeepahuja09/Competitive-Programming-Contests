#include<bits/stdc++.h>
using namespace std;

#define int long long int
#define vi vector<int>
#define pb push_back
#define vvi vector<vi>


signed main() {
    int t = 1;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        if(n % 2 == 1)  n--;
        cout << n / 2 << endl;
    }
}
