#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, ans = 0;
    double in;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> in;
        if (in == 10.0) ++ans;
    }
    cout << ans;

}
