#include <bits/stdc++.h>
using namespace std;

struct pos {
    int x;
    int y;
};

struct cal {
    int a;
    int b;
    int c;
};

cal coord_build(const pos &a, const pos &b) {
    cal coord;
    coord.a = a.y - b.y;
    coord.b = b.x - a.x;
    coord.c = a.x * b.y - a.y * b.x;
    return coord;
}

int double_len(const pos &a, const pos &b) {
    return pow(a.x - b.x, 2) + pow(a.y - b.y, 2);
}

int main() {
    vector<pos> p(4);
    for (auto &item:p) cin >> item.x >> item.y;

    cal _a = coord_build(p[0], p[1]);
    cal _b = coord_build(p[1], p[2]);
    cal _c = coord_build(p[2], p[3]);
    cal _d = coord_build(p[3], p[0]);
    double __a = (double(_a.a) / _a.b) * -1.0;
    double __b = (double(_b.a) / _b.b) * -1.0;
    double __c = (double(_c.a) / _c.b) * -1.0;
    double __d = (double(_d.a) / _d.b) * -1.0;

    if (__a == __c) {
        if (__b == __d) {
            int a_len = double_len(p[0], p[1]);
            int b_len = double_len(p[1], p[2]);
            if (a_len == b_len) {
                int e_len = double_len(p[0], p[2]);
                if (a_len + b_len == e_len) cout << 5;
                else cout << 3;
            }
            else cout << 4;
        }
        else cout << 1;
    }
    else {
        if (__b == __d) cout << 1;
        else cout << 0;
    }
}
