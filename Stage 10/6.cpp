#include <bits/stdc++.h>
using namespace std;

int n, ans;

int main() {
    cin >> n;
    vector<int> brick(n), store(n);
    for (auto &hardness:brick)
        cin >> hardness;
    sort(brick.rbegin(), brick.rend());
    ans = brick.at(0) + 1;
    for (int i = 0; i < brick.at(0); ++i) {
        if (i + brick.at(i) + 1 < n) ans = min(ans, i + brick.at(i) + 1);
    }
    cout << ans << '\n';
    return 0;
}
