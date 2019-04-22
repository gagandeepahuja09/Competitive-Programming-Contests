#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int cnt = 0;
      bool *isComposite = new bool[n + m + 1];
      memset(isComposite, 0, sizeof(bool) * (n + m + 1));
      for (int x = 2; x*x <= n+m; x++) {
            if (!isComposite[x]) {
                  for (int k = x * x; k <= n + m; k += x)
                    isComposite[k] = true;
            }
      }
    for(int i = 2; i <= n + m; i++) {
        if(!isComposite[i])
            cnt++;
    }
    cout << cnt << endl;
    delete isComposite;
	return 0;
}
