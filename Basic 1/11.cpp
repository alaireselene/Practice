#include <bits/stdc++.h>
using namespace std;

struct pos {
    double x, y;
};

double len (const pos &a, const pos &b) {
    return sqrt(pow(a.x - b.x, 2) + pow(a.y - b.y, 2));
}

double r(const double &a, const double &b, const double &c) {
    double p = (a + b + c) / 2.000;
    if (max({a, b, c}) == p) return 0.000;
    double s = sqrt(p * (p - a) * (p - b) * (p - c));
    return a * b * c / (s * 4.000);
}

int main() {
    vector<pos> c(3);
    for (auto &item:c) cin >> item.x >> item.y;
    double ab = len(c[0], c[1]), bc = len(c[1], c[2]), ca = len(c[2], c[0]);
    double _r = r(ab, bc, ca);
    if (_r == 0.000) cout << "No";
    else cout << fixed << setprecision(3) << _r;
}
