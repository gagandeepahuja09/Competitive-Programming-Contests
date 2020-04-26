#include <bits/stdc++.h>
using namespace std;

#define int long long int

vector<int> freq;

int n, k;
vector<vector<int>> solution;
vector<int> limit;

bool possible(int sz) {
    solution.assign(sz, {});
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    for(int i = 0; i < sz; i++) {
        pq.push({ 0, i });
    }
    for(int j = k; j > 0; j--) {
        for(int i = 0; i < freq[j]; i++) {
            auto t = pq.top();
            if(t.first >= limit[j]) {
                return false;
            }
            pq.pop();
            solution[t.second].push_back(j);
            t.first++;
            pq.push(t);
        }
    }
    return true;
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n >> k;
    vector<int> v(n);
    freq.assign(k + 1, 0);
    for(int i = 0; i < n; i++) {
        cin >> v[i];
        freq[v[i]]++;
    }
    limit.resize(k + 1);
    for(int i = 1; i <= k; i++) {
        cin >> limit[i];
    }
    int low = 1, high = n, ans = 1;
    while(low <= high) {
        int mid = low + (high - low) / 2;
        if(possible(mid)) {
            ans = mid;
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }
    }
    possible(ans);
    cout << solution.size() << endl;
    for(auto& s : solution) {
        cout << s.size() << " ";
        for(auto& i : s) {
            cout << i << " ";
        }
        cout << endl;
    }
}
