#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    long double x;
    cin >> n >> x;
    long double A[n];
    for(int i = 0; i < n; i++)
        cin >> A[i];
    int start = 0, end = 0;
    long double currSum = 0, maxSum = INT_MIN, mxStart;
    for(int i = 0; i < n; i++) {
        currSum += A[i];
        if(currSum < 0) {
            currSum = 0;
            start = i + 1;
        }
        if(currSum > maxSum) {
            maxSum = currSum;
            mxStart = start;
            end = i;
        }
    }
    // cout << mxStart << " " << end << endl;
    for(int i = mxStart; i <= end; i++) {
        A[i] = A[i] / x;
    }
    long double sum = 0;
    for(int i = 0; i < n; i++) {
        sum += A[i];
    }
    cout << sum << endl;
	return 0;
}

