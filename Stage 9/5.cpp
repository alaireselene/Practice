#include <bits/stdc++.h>
using namespace std;

uint64_t s, x, n;
vector <uint64_t> inp;

int main(){
    // freopen("CAKE.INP", "r", stdin);
    // freopen("CAKE.OUT", "w", stdout);
    cin >> s >> n;
    double raw = 0.0;
    for (uint64_t i = 0; i < n; ++i){
        cin >> x;
        inp.push_back(x);
        raw += (1.0 / x);
    }
    raw = double(s) / raw;
    uint64_t l = raw, r = (*max_element(inp.begin(), inp.end())) * s;
    while (l <= r){
        uint64_t m = l + (r - l) / 2, c = 0;
        for (auto &item:inp) c += (m / item);
        if (c >= s) r = m - 1;
        else l = m + 1;
    }
    cout << l << '\n';
}
