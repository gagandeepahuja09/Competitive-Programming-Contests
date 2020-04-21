    #include <bits/stdc++.h>
    using namespace std;
     
    #define ll long long int
     
    ll MOD;
     
    ll power(ll x, ll y) {
        if(y == 0)
            return 1;
        if(x % 2)
            return (x * power(x, y - 1)) % MOD;
        ll temp = power(x, y / 2);
        return (temp * temp) % MOD;
    }
     
    ll steps(ll sum, vector<ll>& A, ll k) {
        ll count = 0, n = A.size();
        for(int i = 0; i < A.size() / 2; i++) {
            ll curr = A[i] + A[n - 1 - i];
            if(A[i] + A[n - 1 - i] == sum) {
                continue;
            }
            if(A[i] > sum || A[n - 1 - i] > sum) {
                count += 2;
            }
            else if(A[i] + k < sum && A[n - 1 - i] + k < sum) {
                count += 2;
            }
            else {
                count++;
            }
        }
        return count;
    }
     
    int main() {
        ll t;
        cin >> t;
        MOD = 1e9 + 7;
        while(t--) {
            ll n, k;
            cin >> n >> k;
            vector<ll> v(n);
            for(int i = 0; i < n; i++) {
                cin >> v[i];
            }
            vector<ll> pre(2 * k + 2, 0);
            for(int i = 0; i < n / 2; i++) {
                ll a = min(v[i], v[n - i - 1]), b = max(v[i], v[n - i - 1]);
                // 2 from here
                pre[2] += 2; 
                // one from here
                pre[a + 1]--;
                // zero for this
                pre[a + b]--; 
                // one from here
                pre[a + b + 1]++;
                // two from here
                pre[b + k + 1]++;
            }
            ll mn = n + 1;
            for(int i = 2; i <= 2 * k; i++) {
                pre[i] += pre[i - 1];
                mn = min(mn, pre[i]);
            }
            cout << mn << endl;
        }
    }
