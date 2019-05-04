#include<bits/stdc++.h>
using namespace std;

bool check(string s) {
    for(int i = 1; i < s.size(); i++) {
        if(abs(s[i] - s[i - 1]) == 1)
            return false;
    }
    return true;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        string s, odd, even;
        cin >> s;
        int cnt[26];
        memset(cnt, 0, sizeof cnt);
        for(int i = 0; i < s.size(); i++) {
            cnt[s[i] - 'a']++;
        }
        bool st = true;
        for(int i = 0; i < 26; i++) {
            for(int j = 0; j < cnt[i]; j++) {
                if(i % 2)
                    odd += (i + 'a');
                else
                    even += (i + 'a');
            }
        }
        if(check(odd + even))
            cout << (odd + even).c_str();
        else if(check(even + odd))
            cout << (even + odd).c_str();
        else
            cout << "No answer";
        cout << endl;    
    }
}
