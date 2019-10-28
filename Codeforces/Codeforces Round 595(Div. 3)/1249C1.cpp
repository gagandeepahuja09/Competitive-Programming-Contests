#include<bits/stdc++.h>
using namespace std;

#define ll long long int

int main() {
int t;
cin >> t;
int N = 1e4;
vector<int> v = { 1 };
for(int i = 0; i <= N; i++) {
    int u = 0;
    for(int j = 0; j < 32; j++) {
        if(i & (1 << j))
            u += (pow(3, j));
    }
    v.push_back(u);
}
while(t--) {
    int n;
    cin >> n;
    for(int i = 0; i < v.size(); i++) {
        if(v[i] >= n) {
            cout << v[i] << endl;
            break;
        }
    }
}
}
