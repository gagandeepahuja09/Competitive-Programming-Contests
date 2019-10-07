#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define N 1000001

long long gcd(long long a, long long b) {
	if (a < b) return gcd(b, a);
	if (b == 0) return a;
	return gcd(b, a % b);
}

int main() {
    ll a, b;
    cin >> a >> b;
    ll g = gcd(a, b);
    vector<bool> isprime(N, true);
    vector<ll> primes;
    for(ll i = 2; i <= N; i++) {
        if(isprime[i]) {
            primes.push_back(i);
            for(ll j = i * i; j <= N; j += i) {
                isprime[j] = false;       
            }
        }
    }
    ll cnt = 1;
    for(ll p : primes) {
        if(g % p == 0)
            cnt++;
        while(g % p == 0)
            g /= p;
    }
    if(g != 1)
        cnt++;
    cout << cnt << endl;
}
