/*  Unknown Bug.  */
#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;

ull n, m, h, hi, lo = 0;
vector<ull> in;

bool isTrue(ull k){
    ull s = 0;
    for (ull i = 0; i < n; ++i){
        if (in[i] > k) s += (in[i] - k);
    }
    return s >= m;
}

int main(){
    //freopen("WOOD.INP", "r", stdin);
    //freopen("WOOD.OUT", "w", stdout);
    cin >> n >> m;
    for (ull i = 0, x; i < n; ++i){
        cin >> x;
        in.push_back(x);
    } 
    hi = *max_element(in.begin(), in.end());
    while (lo <= hi){
        h = (lo + hi) / 2;
        if (isTrue(h)) lo = h + 1;
        else hi = h - 1;
    }
    cout << hi;
    return 0;
}
