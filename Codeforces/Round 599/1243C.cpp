#include <bits/stdc++.h>
using namespace std;
 
#define ll long long int
#define N 1000001
 
ll arr[N];
 
int main() {
    for(ll i=1;i<=N;i++)
        arr[i]=i;
    for(ll i=2;(i*i)<=N;i++){
        if(arr[i]==i){
            for(ll j=i*i;j<=N;j+=i)
            {
                if(arr[j]==j)
                    arr[j]=i;
            }
        }
    }
    ll n, cnt = 0;
    cin >> n;
    ll mn = n;
    if(n == 1) {
        cout << 1;
        return 0;
    }
    for(ll i = 2; i * i <= n; i++) {
        if(n % i == 0) {
            if(arr[i] == i)
                cnt++;
            if(i != n / i && __gcd(i, n / i) == 1)
                cnt++;
            mn = min(mn, i);
        }
        if(cnt >= 2)
            break;
    }
    if(cnt > 1) {
        cout << 1;
    }
    else if(cnt == 1) {
        cout << mn;
    }
    else {
        cout << n;
    }
    return 0;
}
