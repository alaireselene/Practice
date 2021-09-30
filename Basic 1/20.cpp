#include <bits/stdc++.h>
using namespace std;

int main() {
    uint64_t digit = 0, n, _n;
    cin >> n;
    _n = n;
    while (n) {
        digit += n % 10;
        n /= 10;
    }
    cout << (_n % digit == 0);
    return 0;
}
