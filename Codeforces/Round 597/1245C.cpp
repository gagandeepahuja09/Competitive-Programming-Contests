    #include<bits/stdc++.h>
    using namespace std;
     
    #define ll long long int
    #define MOD 1000000007
     
    map<ll, ll> dp;
     
    ll f(string s, int i) {
        if(i >= s.size())
            return 1;
        if(s[i] == 'm' || s[i] == 'w')
            return 0;
        if(dp.find(i) != dp.end())
            return dp[i];
        ll op1 = f(s, i + 1);
        ll op2 = 0;
        if(i < s.size() - 1) {
            if((s[i] == 'u' && s[i + 1] == 'u') || (s[i] == 'n' && s[i + 1] == 'n'))
                op2 = f(s, i + 2);
        }
        return dp[i] = (op1 % MOD + op2 % MOD) % MOD;
    }
     
    int main() {
        /*int t;
        cin >> t;
        while(t--) {*/
            string s;
            cin >> s;
            ll n = s.size();
            // memset(dp, -1, sizeof dp);
            for(int i = 0; i < s.size(); i++) {
                if(s[i] == 'm' || s[i] == 'w') {
                    cout << 0;
                    return 0;
                }
            }
            ll dp[n + 1];
            memset(dp, 0, sizeof dp);
            dp[0] = 1;
            for(int i = 0; i < s.size(); i++) {
                if(i >= 1) {
                    if((s[i] == 'u' && s[i - 1] == 'u') || (s[i] == 'n' && s[i - 1] == 'n')) {
                        dp[i + 1] = (dp[i - 1] % MOD + dp[i + 1] % MOD) % MOD;
                    }
                }
                dp[i + 1] = (dp[i] % MOD + dp[i + 1] % MOD) % MOD;
                // cout << dp[i + 1] << " ";
            }
            cout << dp[n] << endl;
        // }
    }
