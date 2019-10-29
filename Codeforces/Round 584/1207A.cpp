#include<bits/stdc++.h>
using namespace std;

#define ll long long int

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++)
        cin >> a[i];
    unordered_map<int, int> mp;    
    sort(a.begin(), a.end());
    for(int i = 0; i < n; i++) {
        bool flag = true;
        for(auto j : mp) {
            if(a[i] % j.first == 0) {
                flag = false;
            }
        }
        if(flag)
            mp[a[i]]++;
    }
    cout << mp.size();
}
