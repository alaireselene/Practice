#include <bits/stdc++.h>
using namespace std;

vector <long long> a;
long long ans = INT32_MIN;
// a - input array
// ans - answer

int n, pos = 0, pend;
// n - size of array.
// pos - pos of 1st position.
// pend - pos of the last position.

long long x;
// x - input.

void inp(){
    cin >> n;
    for (int i = 0; i < n; ++i){
        cin >> x;
        a. push_back(x);
    }
}

void work(){
    long long dp = a[0];
    int tpos = 0;
    for (int i = 1; i < n; ++i){
        int tdp = max(dp + a[i], a[i]);
        if (tdp == dp + a[i]){
            tpos = i - 1;
        }
        else tpos = i;
        dp = tdp;
        if (dp > ans){
            pos = tpos;
            ans = dp;
            pend = i;
        }
    }
}

int main(){
    inp();
    work();
    cout << pos << ' ' << pend << ' ' << ans;
    return 0;
}
