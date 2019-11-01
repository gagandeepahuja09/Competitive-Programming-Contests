#include<bits/stdc++.h>
using namespace std;

#define ll long long int

int main() {
    int n;
    cin >> n;
    const int MAX = 100000;
    string s;
    cin >> s;
    vector<int> cnt(MAX, 0);
    for(int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        int c = s[i] - '0';
        for(int j = 0; j < MAX; j++) {
            cnt[j] += c;
            if(j == b) {
                b += a;
                c ^= 1;
            }
        }
    }
    cout << *max_element(cnt.begin(), cnt.end());
}
