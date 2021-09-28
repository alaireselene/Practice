#include <bits/stdc++.h>
using namespace std;

struct pos {
    double x;
    double y;
};

void posin(pos &a) {
    cin >> a.x >> a.y;
}

int declare(double &x) {
    x /= (2 * M_PI / 360.0);
    if (x < 90.0) return 1;
    else if (x == 90.00) return 2;
    else return 3;
}

int main() {
    pos a, b, c;
    posin(a); posin(b); posin(c);
    pos ab, ac;
    ab.x = b.x - a.x;
    ab.y = b.y - a.y;
    ac.x = c.x - a.x;
    ac.y = c.y - a.y;

    double ans = acos((ab.x * ac.x + ab.y * ac.y) / (sqrt((pow(ab.x, 2) + pow(ab.y, 2)) * (pow(ac.x, 2) + pow(ac.y, 2)))));
    return !(cout << declare(ans) << ' ' << ans << endl);
}
