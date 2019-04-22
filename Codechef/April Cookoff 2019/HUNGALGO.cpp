#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, cnt = 0;
        cin >> n;
        int a[n + 1][n + 1];
        bool ans = true;
        for(int i = 0; i < n; i++) {
            int cnt = 0;
            for(int j = 0; j < n; j++) {
                cin >> a[i][j];
                if(a[i][j] == 0)
                    cnt++;   
            }
            if(cnt < 1)
                ans = false;
        }
        for(int i = 0; i < n; i++) {
            int cnt = 0;
            for(int j = 0; j < n; j++) {
                if(a[j][i] == 0)
                    cnt++;   
            }
            if(cnt < 1)
                ans = false;
        }
        if(ans)
            cout << "YES";
        else
            cout << "NO";
        cout << endl;    
    }
	return 0;
}

