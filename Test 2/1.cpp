#include <bits/stdc++.h>
using namespace std;

int main() {
    double ans = 0, n = 1.000000;
    do {
        n /= 3.000000;
        ans += n;
    } while (n >= 0.000001);
    cout << ans;
    return 0;
}
