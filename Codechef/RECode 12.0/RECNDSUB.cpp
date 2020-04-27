#include <bits/stdc++.h>
using namespace std;

#define int long long int

int const M = 163577857, N = 1e5 + 1;
int f1[N], f2[N], iv[N];

int mult(int a, int b) { 
  return (a%M * (b%M)) % M;
}

int nck(int n, int k){
    return f1[n] * f2[n-k] % M * f2[k] % M;
}

signed main() {
    int t = 1;
    cin >> t;
    iv[1] = f1[0] = f2[0] = 1;
    for (int i=2; i < N; i++) {
        iv[i] = (M - (M/i) * iv[M%i] % M) % M;
    }
    for (int i=1; i < N; i++){
        f1[i] = f1[i-1] * i % M;
        f2[i] = f2[i-1] * iv[i] % M;
    }
    while(t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        int c0 = 1, c1 = 0, c2 = 0;
        for(int i = 0; i < n; i++) {
            cin >> a[i];
            if(a[i] == 1)   c1++;
            else if(!a[i])  c0 = (c0 * 2) % M;
            else    c2++;
        }
        for(int k = -n; k <= n; k++) {
            int tmp = abs(k);
            int ans = 0;
            if(k > 0) {
                if(c1 >= tmp)
                    ans = (c0 * nck(c1 + c2, c1 - tmp)) % M;
            }
            else if(k < 0) {
                if(c2 >= tmp)
                    ans = (c0 * nck(c1 + c2, c2 - tmp)) % M;
            }
            else {
                ans = (c0 * nck(c1 + c2, c1) - 1 + M) % M;
            }
            cout << ans << " ";
        }
        cout << endl;
    }
}
