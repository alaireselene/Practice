#include <bits/stdc++.h>
using namespace std;

vector<int> store(10, 0);

int main() {
    uint64_t n, sum = 0;
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        string a = to_string(i);
        for (int k = 0; k < a.length(); ++k) {
            ++store.at(a[k] - '0');
        }
    }
    for (int i = 0; i < 10; ++i) {
        sum += i * store[i];
    }
    cout << sum << endl;
    for (int i = 0; i < 10; ++i) {
        cout << i << ' ' << store[i] << endl;
    }
    return 0;
}
