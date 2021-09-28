#include <bits/stdc++.h>
using namespace std;

int main() {
    double w[4] = {6500, 7800, 9200, 10300}, ans = 0.00, n;
    cin >> n;
    if (0 < n && n < 6) ans = w[0] * n;
    else if (5.00 < n && n < 16.00) {
        n -= 5.00;
        ans += 5.00 * w[0] + n * w[1];
    }
    else if (15 < n && n < 26) {
        n -= 15.00;
        ans += 5.00 * w[0] + 10.00 *  w[1] + n * w[2];
    }
    else {
        n -= 25.00;
        ans += 5.00 * w[0] + 10.00 * w[1] + 10.00 * w[2] + n * w[3];
    }
    cout << fixed << setprecision(2) << ans << endl << ans * 112.00 / 100.00 - ans << endl << ans * 112.00 / 100.00;
}
