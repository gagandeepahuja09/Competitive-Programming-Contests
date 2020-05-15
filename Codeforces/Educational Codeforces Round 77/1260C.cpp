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
#define MAXN 101

int gcd(int a , int b)
{
   if(b==0) return a;
   a%=b;
   return gcd(b,a);
}

signed main() {
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
    int t = 1;
    cin >> t;
    while(t--) {
    	int a, b, k;
    	cin >> a >> b >> k;
    	int g = gcd(a, b);
    	if(a > b)
    		swap(a, b);
    	a /= g; b /= g;
    	// We want to make both coprime, so we divide by gcd
    	// Let's say b = 23, a = 6 => ceil(23 / 6) = 4
    	// Now we need to check 1 2 3 .... 22
    	// 1, 7, 13, 19 
    	int parts = (b - 1 + a - 1) / a;
    	if(parts >= k)	cout << "REBEL";
    	else	cout << "OBEY";
    	cout << endl;
    }
}
