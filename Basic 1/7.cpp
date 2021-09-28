#include <bits/stdc++.h>
using namespace std;

struct pos {
    int x;
    int y;
};

struct coord {
    int a;
    int b;
    int c;
};

coord coord_build (const pos &a, const pos &b) {
    coord crd;
    crd.a = a.y - b.y;
    crd.b = b.x - a.x;
    crd.c = a.x * b.y - b.x * a.y;
    return crd;
}

int main() {
    vector<pos> l(4);
    for (auto &item:l) cin >> item.x >> item.y;
    coord _a = coord_build(l[0], l[1]);
    coord _b = coord_build(l[2], l[3]);
    cout << (double(_a.a * _b.a) / (_a.b * _b.b) == -1.0 ? "TRUE" : "FALSE");
    return 0;
}
