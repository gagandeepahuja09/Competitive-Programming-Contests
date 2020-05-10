

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
     
    int mp[8001];
     
    signed main() {
        int t = 1;
        cin >> t;
        while(t--) {
            int n;
            cin >> n;
            memset(mp, 0, sizeof mp);
            vi a(n);
            for(int i = 0; i < n; i++)  cin >> a[i];
            for(int i = 0; i < n; i++) {
                int sum = a[i];
                for(int j = i + 1; j < n; j++) {
                    sum += a[j];
                    if(sum <= 8000)
                        mp[sum]++;
                }
            }
            int cnt = 0;
            for(int i = 0; i < n; i++)
                if(mp[a[i]])
                    cnt++;
            cout << cnt << endl;
        }
    }
