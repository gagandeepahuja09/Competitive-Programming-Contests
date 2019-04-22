#include<bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	string s;
	cin >> s;
	int i = n - 1, cnt = 0;
	while(s[i] == '0' && i >= 0) {
		i--;
		cnt++;
	}
	cout << cnt << endl;
}
