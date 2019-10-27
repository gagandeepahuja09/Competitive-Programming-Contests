#include<bits/stdc++.h>
using namespace std;

#define ll long long int

struct cmp
{
    bool operator()(const pair<int, int>& l, const pair<int, int>& r)
    {
        if(l.first == r.first)
            return l.second > r.second;
        return l.first < r.first;    
    }
};


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, b;
    cin >> n >> b;
    priority_queue<pair<int, int>, vector<pair<int, int>>, cmp> pq;
    for(int i = 0; i < n; i++) {
        int u;
        cin >> u;
        pq.push({ u, i });
    }
    while(!pq.empty() && b--) {
        auto t = pq.top();
        pq.pop();
        int f = t.first, s = t.second;
        f--;
        cout << s + 1 << " ";
        pq.push({ f, s });
    }
}
