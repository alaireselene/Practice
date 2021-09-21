#include <bits/stdc++.h>
using namespace std;

int main() {
    int m[3], ans = 0;
    for (auto &item:m) cin >> item;
    int _k, _m, _n;
    cin >> _k >> _m >> _n;
    ans += _k * m[0] + _m * m[1] + (_n - _k - _m) * m[2];
    cout << ans;
}
