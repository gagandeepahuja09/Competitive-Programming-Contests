#include<bits/stdc++.h>
using namespace std;

#define ll long long int

int main() {
    int t;
    cin >> t;
    while(t--) {
        ll x, y;
        cin >> x >> y;
        int cnt = 0;
        while(y > x) {
            if(y % 2 == 0) {
                y /= 2;
            }    
            else
                y++;
            cnt++;    
        }
        cout << cnt + x - y << endl;    
    }
}
