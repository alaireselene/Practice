#include <bits/stdc++.h>
using namespace std;

int n, sum;

int main() {
    cin >> n;
    vector<int> solve_time(n);
    for (auto &item:solve_time)
        cin >> item;
    sort(solve_time.rbegin(), solve_time.rend());
    sum = solve_time.at(0);
    for (int i = 1; i < n; ++i) {
        sum = sum * 2 + solve_time.at(i);
    }
    cout << sum;
    return 0;
}
