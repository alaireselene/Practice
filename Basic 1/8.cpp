#include <bits/stdc++.h>
using namespace std;

struct pos {
    double x;
    double y;
    friend istream& operator>> (istream &stream, pos &A) {
        stream >> A.x >> A.y;
        return stream;
    }
    friend ostream& operator<< (ostream &stream, const pos &A) {
        stream << A.x << A.y;
        return stream;
    }
};

int declare(double &x) {
    x /= (2 * M_PI / 360.0);
    if (x < 90.0) return 1;
    else if (x == 90.00) return 2;
    else return 3;
}

int main() {
    pos a, b, c, ab, ac;
    cin >> a >> b >> c;
    ab.x = b.x - a.x;
    ab.y = b.y - a.y;
    ac.x = c.x - a.x;
    ac.y = c.y - a.y;
    double dot = ab.x * ac.x + ac.y * ab.y, det = ab.x * ac.y - ac.x * ab.y;
    double ans = atan2(det, dot);
    return !(cout << declare(ans) << ' ' << ans << endl);
}
