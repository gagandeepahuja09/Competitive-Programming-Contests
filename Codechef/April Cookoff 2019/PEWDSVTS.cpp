#include<bits/stdc++.h>
using namespace std;

long long int n ,a, b, x, y, z;
priority_queue <long long int> pq;
long long int c[100001];

void solve() {
    int a1 = (z-b)/y;
    int a2 = (z-a)/x;
    if((z - b)%y==0)
        a1--;
    if((z-a)%x==0)
        a2--;
    if(a2<a1)
    {
        cout<<0<<endl;
        return;
    }
        
    long long int res=a+x*a1, cnt=0;
    bool ans=1;
    while(res < z && !pq.empty()) {
        long long int tp=pq.top();
        if(tp == 0)
        {
            ans=0;
            break;
        }
        res += tp;
        pq.pop();
        pq.push(tp/2);
        cnt++;
    }
    if(ans == 0)
        cout<<"RIP"<<endl;
    else 
        cout << cnt << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        cin >> n >> a  >> b >> x >> y >> z;
        while(!pq.empty())
            pq.pop();
        for(int i=0; i<n; i++) {
           cin >> c[i];
           pq.push(c[i]);
        }
        solve();
    }
}
