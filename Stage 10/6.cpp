#include <bits/stdc++.h>
using namespace std;

int n, answer = 1;

int main() {
    cin >> n;
    vector<int> brick(n);
    for (auto &hardness:brick)
        cin >> hardness;
    sort(brick.rbegin(), brick.rend());
    for (auto &item:brick) cout << item << ' ';
    cout << '\n';
    for (int i = 1; i < n; ++i) {
        if (brick.at(0) <= 0) break;
        ++answer;
        brick.at(0) -= brick.at(i);
    }
    cout << answer << '\n';
    return 0;
}
