#include<bits/stdc++.h>
using namespace std;

#define ll long long int

int main() {
    int t;
    cin >> t;
    for(int tc = 1; tc <= t; tc++) {
        cout << "Case #" << tc << ": ";
        int n, p;
        cin >> n >> p;
        vector<string> v(p);
        for(int i = 0; i < p; i++) {
            cin >> v[i];
        }
        for(int i = 0; i < v.size(); i++) {
            for(int j = i + 1; j < v.size(); j++) {
                int k = 0;
                for(; k < v[i].size() && k < v[j].size() && v[i][k] == v[j][k]; k++);
                if(k == v[i].size())
                    v[j] = ".";
                else if(k == v[j].size())    
                    v[i] = ".";
            }
        }
        ll ans = pow(2, n);
        for(int i = 0; i < v.size(); i++) {
            if(v[i] != ".") {
                ans -= pow(2, n - v[i].size());
            }
        }
        cout << ans << endl;
    }
}
