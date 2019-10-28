    #include<bits/stdc++.h>
    using namespace std;
     
    #define ll long long int
     
    int main() {
        int t;
        cin >> t;
        while(t--) {
            int n;
            cin >> n;
            unordered_map<int, int> mp;
            for(int i = 0; i < n; i++) {
                int u;
                cin >> u;
                mp[i + 1] = u;
            }
            vector<int> vis(n + 1, -1);
            for(int i = 0; i < n; i++) {
                int u = mp[i + 1];
                if(vis[u] != -1)
                    continue;
                int cnt = 0;
                vector<int> p;
                while(u != i + 1) {
                    p.push_back(u);
                    u = mp[u];
                    cnt++;
                }
                for(int x : p)
                    vis[x] = cnt + 1;
            }
            for(int i = 1; i <= n; i++)
                cout << ((vis[i] == -1) ? 1 : vis[i]) << " ";
            cout << endl;
        }
    }
