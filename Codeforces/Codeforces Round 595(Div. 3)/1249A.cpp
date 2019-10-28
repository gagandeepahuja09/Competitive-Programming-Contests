#include<bits/stdc++.h>
using namespace std;

#define ll long long int

int main() {
int t;
cin >> t;
while(t--) {
    int n;
    cin >> n;
    int cnt = 1;
    unordered_map<int, int> mp;
    for(int i = 0; i < n; i++) {
        int u;
        cin >> u;
        if(mp[u + 1] || mp[u - 1])
            cnt = 2;
        mp[u] = 1;
    }
    cout << cnt << endl;
}
}
