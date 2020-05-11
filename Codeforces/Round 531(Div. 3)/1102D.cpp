    #include <bits/stdc++.h>
    using namespace std;
     
    #define int long long int
    #define vi vector<int>
    #define vvi vector<vi>
    #define read(a)  for(int i = 0; i < n; i++) cin >> a[i];
    #define print(a)  for(int i = 0; i < n; i++) cout << a[i] << " ";
    #define pb push_back
    #define ins insert
    #define pql priority_queue<int>
    #define pqs priority_queue<int, vi, greater<int>>
    #define pqlv priority_queue<vi>
    #define pqsv priority_queue<vi, vvi, greater<vi>>
    #define endl '\n'
    #define MOD 998244353
     
    signed main() {
        int n;
        string s;
        cin >> n >> s;
        int need = n / 3;
        vi cnt(3, 0);
        for(char c : s)
            cnt[c - '0']++;
        vi sofar(3, 0);
        for(int i = 0; i < n; i++) {
            int c = s[i] - '0';
            if(cnt[c] > need) {
                for(int j = 0; j < 3; j++) {
                    if((j < c || sofar[c] == need) && cnt[j] < need) {
                        cnt[j]++; cnt[c]--;
                        s[i] = j + '0';
                        break;
                    }
                }
            }
            sofar[s[i] - '0']++;
        }
        cout << s;
    }
