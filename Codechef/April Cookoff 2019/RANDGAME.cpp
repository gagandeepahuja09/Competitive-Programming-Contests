#include <bits/stdc++.h>
using namespace std;

bool wins(long long int n) {
    int cnt = 0;
    while(n % 2 == 0) {
        n /= 2;
        cnt++;
    }
    if(cnt % 2)
        return false;
    return true;    
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        long long int n;
        cin >> n;
        if(!wins(n)) {
            cout << "Lose" << endl;
            string s;
            cin >> s;
            if(s == "WA") {
                exit(0);
            }
            continue;
        }
        cout << "Win" << endl;
        while(1) {
            if(n % 2 == 0) {
                cout << "/2" << endl;
                n /= 2;
                string s;
                cin >> s;
                if(s == "GG")
                    break;
                if(s == "WA")
                    exit(0);
                if(s == "+1")
                    n++;
                else if(s == "-1")
                    n--;
                else
                    n /= 2;
                if(n == 0)
                    exit(0);
            }
            else {
                if(n == 1)
                    cout << "-1" << endl;
                else {
                    if(!wins(n +1)) {
                        cout << "+1" << endl;
                        n++;
                    }
                    else {
                        cout << "-1" << endl;
                        n--;
                    }
                }
                string s;
                cin >> s;
                if(s == "GG")
                    break;
                if(s == "WA")
                    exit(0);
                if(s == "+1")
                    n++;
                else if(s == "-1")
                    n--;
                else
                    n /= 2;
                if(n == 0)
                    exit(0);
            }
        }
    }
	return 0;
}

