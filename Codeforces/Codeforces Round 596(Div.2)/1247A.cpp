#include<bits/stdc++.h>
using namespace std;

#define ll long long int

int main() {
int a, b;
cin >> a >> b;
if(a == b) {
    cout << a << "1 " << b << "2";
}
else if(b - a == 1)
    cout << a << "9 " << b << "0";
else if(a == 9 && b == 1)    
    cout << a << " " << b << "0";
else
    cout << -1;
    
}
