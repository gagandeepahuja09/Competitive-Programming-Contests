#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define N 1000001

int main() {
    ll n, m;
    cin >> n >> m;
    priority_queue<ll> pq;
    for(int i = 0; i < n; i++) {
        int u;
        cin >> u;
        pq.push(u);
    }
    ll ans = 0;
    while(!pq.empty() && m--) {
        ll t = pq.top();
        pq.pop();
        pq.push(t / 2);
    }
    while(!pq.empty()) {
        ans += pq.top();
        pq.pop();
    }
    cout << ans << endl;
}
