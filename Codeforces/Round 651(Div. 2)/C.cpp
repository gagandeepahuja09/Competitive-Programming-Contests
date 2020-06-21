#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        if(n == 1) {
            cout << "FastestFinger";
        }
        else if(n % 2 == 1 || n == 2) {
            cout << "Ashishgup";
        }
        else {
            int temp = n;
            int cnt = 0, c = 0;
            for(int i = 2; i * i <= temp; i++) {
                while(n % i == 0)   {
                    cnt++;
                    if(i % 2)   c++;
                    n /= i;
                }
            }
            if(n > 1)   {
                if(n % 2)   c++;
                cnt++;
            }
            // cout << cnt;
            if(cnt > 2 && c >= 1) {
                    cout << "Ashishgup";
            }
            else {
                cout << "FastestFinger";
            }
            // cout << " " << n << " " << cnt;
            // cout << n << endl;
        }
        cout << endl;
    }
}
