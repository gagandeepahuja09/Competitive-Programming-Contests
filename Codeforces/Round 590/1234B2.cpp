#include<bits/stdc++.h>
using namespace std;

#define ll long long int

int main() {
int n, k;
cin >> n >> k;
queue<int> q;
map<int, int> mp;
for(int i = 0; i < n; i++) {
    int u;
    cin >> u;
    if(!mp[u]) {
        mp[u]++;
        if(q.size() == k) {
            int t = q.front();
            q.pop();
            if(--mp[t] == 0)
                mp.erase(t);
        }
        q.push(u);
    }
}
cout << q.size() << endl;
vector<int> v;
while(!q.empty()) {
    v.push_back(q.front());
    q.pop();
}
reverse(v.begin(), v.end());
for(auto i : v)
    cout << i << " ";
}
