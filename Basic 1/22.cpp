#include <bits/stdc++.h>
using namespace std;

bool good(const int &n) {
    int a = 0, b = 0;
    string s = to_string(n);
    for (int i = 0; i < s.length(); ++i) {
        if ((s[i] - '0') % 2 == 0) ++a;
        else ++b;
    }
    return a == b;
}

int main() {
    int a, b, ans = 0;
    cin >> a >> b;
    while (a <= b) {
        if(good(a)) ++ans;
        ++a;
    }
    cout << ans;
}
