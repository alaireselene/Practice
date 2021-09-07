#include <bits/stdc++.h>
using namespace std;

int n, answer = INT_MAX;

int main() {
    cin >> n;
    vector<int> address(n);
    for (auto &item:address)
        cin >> item;
    sort(address.begin(), address.end());
    for (int i = 1; i < n; ++i)
        answer = min(answer,
            address.at(i) - address.at(i - 1));
    cout << answer << '\n';
    return 0;
}
