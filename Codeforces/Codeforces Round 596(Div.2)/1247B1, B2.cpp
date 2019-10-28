#include<bits/stdc++.h>
using namespace std;

#define ll long long int

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, k, d;
        cin >> n >> k >> d;
        vector<int> a(n + 1);
        unordered_map<int, int> mp;
        int mn = INT_MAX;
        for(int i = 1; i <= n; i++) {
            cin >> a[i];
            mp[a[i]]++;
            if(i >= d) {
                mn = min(mn, (int)mp.size());
                if(mp[a[i - d + 1]] == 1)
                    mp.erase(a[i - d + 1]);
                else
                    mp[a[i - d + 1]]--;
            }
        }
        cout << mn << endl;
    }
}
