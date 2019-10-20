#include <bits/stdc++.h>
using namespace std;

bool f(long long int n) {
    if(n == 1 || n == 10 || n == 20)
        return 1;
    // cout << n << endl;    
    bool ans = false;
    if(n % 10 == 0)
        ans = ans | f(n / 10);
    if(n % 20 == 0)
        ans = ans | f(n / 20); 
    return ans;           
}

int main() {
    long long int t;
    cin >> t;
    while(t--) {
        long long int n;
        cin >> n;
        bool flag = f(n);
        if(flag)
            cout <<  "Yes";
        else   
            cout << "No";
        cout << endl;
    }
}
