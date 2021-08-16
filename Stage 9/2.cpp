/*  Suck this  */
#include <bits/stdc++.h>
using namespace std;

vector <int> inp;
int l, r, ans, n;

int main(){
    cin >> n;
    for (int i = 0, x; i < n; ++i){
        cin >> x;
        inp.push_back(x);
    }
    sort(inp.begin(), inp.end());
    int lo = 0, hi = n - 1, mid, ans = INT_MAX;
    while (lo <= hi){
        mid = (lo + hi) / 2;
        if (x[mid] < ans) ans = x[mid];

    }
}
