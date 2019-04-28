#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
 
int main() {
	int t;
	cin>>t;
	while(t--) {
        int n;
        cin >> n;
        unordered_map<string, int> mp;
        vector<string> v1, v2;
        for(int i = 0; i < n; i++) {
            string s1, s2;
            cin >> s1 >> s2;
            v1.push_back(s1);
            v2.push_back(s2);
            mp[s1]++;
        }
        for(int i = 0; i < n; i++) {
            if(mp[v1[i]] > 1)
                cout << v1[i] << " " << v2[i];
            else
                cout << v1[i];
            cout << endl;    
        }
	}
 }

