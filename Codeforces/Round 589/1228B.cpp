#define MOD7 1000000007
#include <iostream>
using namespace std;
int main() {
	int h, w;
	cin >> h >> w;
	int r[h], c[w];
	for (int i = 0; i < h; i++) cin >> r[i];
	for (int j = 0; j < w; j++) cin >> c[j];
	long long ans = 1;
	for (int i = 0; i < h; i++)
		for (int j = 0; j < w; j++) {
			if ((r[i] == j & c[j] > i) | (c[j] == i & r[i] > j)) {cout << 0; return 0;}
			if (r[i] < j & c[j] < i) {ans = (ans * 2) % MOD7;}
	}
	cout << ans << endl;
	return 0;
}
