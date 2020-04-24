#include<bits/stdc++.h>
using namespace std;

#define int long long int
int const M = 1000000007, N = 2e5 + 1;
int f1[N], f2[N], iv[N];

int mult(int a, int b) { 
  return (a%M * (b%M)) % M;
}

int nck(int n, int k){
    return f1[n] * f2[n-k] % M * f2[k] % M;
}

signed main() {
  iv[1] = f1[0] = f2[0] = 1;
  for (int i=2; i < N; i++) {
    iv[i] = (M - (M/i) * iv[M%i] % M) % M;
  }
  for (int i=1; i < N; i++){
      f1[i] = f1[i-1] * i % M;
      f2[i] = f2[i-1] * iv[i] % M;
  }
}
