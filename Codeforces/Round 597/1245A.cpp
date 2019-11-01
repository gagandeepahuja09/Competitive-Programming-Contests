#include<bits/stdc++.h>
using namespace std;

#define ll long long int

int main() {
int t;
cin >> t;
while(t--) {
    int a, b;
    cin >> a >> b;
    if(__gcd(a, b) == 1) {
        cout << "Finite";
    }
    else
        cout << "Infinite";
    cout << endl;    
}
}
