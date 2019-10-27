#include<bits/stdc++.h>
using namespace std;

#define ll long long int

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        bool flag = false, cnt = 0;
        for(int i = 0; i < n; i++) {
            string s;
            int x = 0, y = 0;
            cin >> s;
            flag |= (s.size() % 2);
            for(char ch : s)
                ch == '0' ? x++ : y++;
            if(x % 2 || y % 2)     
                cnt = (cnt + 1) % 2;
        }
        cout << ((flag || !cnt) ? n : n - 1) << endl;
    }
}
