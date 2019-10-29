#include<bits/stdc++.h>
using namespace std;

#define ll long long int

int main() {
int n;
cin >> n;
vector<int> a(n), b(n);
for(int i = 0; i < n; i++) {
    cin >> a[i];
}
unordered_map<int, int> mp;
for(int i = 0; i < n; i++) {
    cin >> b[i];
    mp[b[i]] = i + 1;
}
int mx = INT_MIN, cnt = 0;
for(int i = 0; i < n; i++) {
    a[i] = mp[a[i]];
    if(mx > a[i]) {
        cnt++;
    }
    mx = max(mx, a[i]);
}
cout << cnt << endl;
}
