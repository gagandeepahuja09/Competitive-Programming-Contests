#include<set>
#include<map>
#include<cmath>
#include<stack>
#include<queue>
#include<array>
#include<cstdio>
#include<bitset>
#include<vector>
#include<utility>
#include<sstream>
#include<cstring>
#include<climits>
#include<fstream>
#include<iostream>
#include<iomanip>
#include<algorithm>
#include<map>
#include<cmath>
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
#define all(a)  (a.begin(), a.end())
#define MAXN 1000001

int gcd(int a , int b)
{
   if(b==0) return a;
   a%=b;
   return gcd(b,a);
}

int a, b, c, d;

int f(int i) {
	int mn = min(d, i - 1);
	return mn - c + 1;
}

signed main() {
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
    int t = 1;
    // cin >> t;
    while(t--) {
    	cin >> a >> b >> c >> d;
    	int ans = 0;
    	int cnt[MAXN];
    	memset(cnt, 0, sizeof cnt);
    	for(int i = a; i <= b; i++) {
    		cnt[i + b]++;
    		cnt[i + c + 1]--;
    	}
    	for(int i = 1; i < MAXN; i++) {
    		cnt[i] += cnt[i - 1];
    		// cout << cnt[i];
    		if(i < c)	continue;
    		ans += cnt[i] * (f(i));
    	}
    	cout << ans << endl;
    }
}
