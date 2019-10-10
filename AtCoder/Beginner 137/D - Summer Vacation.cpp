#include<bits/stdc++.h>
using namespace std;

#define ll long long int

int main() {
    int n, m;
    cin >> n >> m;
    unordered_map<int, vector<int>> u;
    for(int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        u[a].push_back(b);
    }
    int ans = 0;
    priority_queue<int> pq;
    for(int i = 0; i <= m; i++) {
        for(int j = 0; j < u[i].size(); j++) {
            pq.push(u[i][j]);
        }
        if(!pq.empty()) {
            ans += pq.top();
            pq.pop();
        }
    }
    cout << ans << endl;
}
