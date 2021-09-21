#include <bits/stdc++.h>
using namespace std;

int main() {
    int w[4] = {6500, 7800, 9200, 10300}, ans = 0, n;
    cin >> n;
    if (0 < n && n < 6) ans = w[0] * n;
    else if (5 < n && n < 16) {
        n -= 5;
        ans += 5 * w[0] + n * w[1];
    }
    else if (15 < n && n < 26) {
        n -= 15;
        ans += 5 * w[0] + 10 *  w[1] + n * w[2];
    }
    else {
        n -= 25;
        ans += 5 * w[0] + 10 * w[1] + 10 * w[2] + n * w[3];
    }
    cout << ans * 112 / 100;
}
