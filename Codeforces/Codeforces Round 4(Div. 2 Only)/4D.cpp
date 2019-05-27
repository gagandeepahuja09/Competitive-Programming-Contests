#include<bits/stdc++.h>
using namespace std;

#define ll long long int

int n, w, h;

struct envelope {
    public: 
    int x, y, d, p, idx;
    bool operator< (const envelope& o) const {
		return x > o.x;
	}
}vp[5001];

int main() {
    int ans = 0, index = -1;
    cin >> n >> w >> h;
    for(int i = 0; i < n; i++) {
        cin >> vp[i].x >> vp[i].y;
        vp[i].idx = i + 1;
        vp[i].d = 1;
        vp[i].p = -1;
    }
    sort(vp, vp + n);
    for(int i = 0; i < n; i++) {
        vp[i].d = 1;
        vp[i].p = -1;
        for(int j = 0; j < i; j++) {
            if(vp[i].x < vp[j].x && vp[i].y < vp[j].y) {
                if(vp[i].d < 1 + vp[j].d) {
                    vp[i].d = 1 + vp[j].d;
                    vp[i].p = j;
                }
            }
        }
        if(vp[i].x > w && vp[i].y > h) {
            if(vp[i].d > ans) {
                ans = vp[i].d;
                index = i;
            }
        }
    }
    cout << ans << endl;
    for(int i = index; i != -1; i = vp[i].p)
        cout << vp[i].idx << " ";
}
