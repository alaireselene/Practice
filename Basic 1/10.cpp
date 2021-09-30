#include <bits/stdc++.h>
using namespace std;

struct pos {
    double x, y, R;
};

double len(const pos &a, const pos &b) {
    return sqrt(pow(a.x - b.x, 2) + pow(a.y - b.y, 2));
}

int main() {
    vector<pos> coord(2);
    for (auto &item:coord) {
        cin >> item.x >> item.y >> item.R;
    }
    double _len = len(coord[0], coord[1]);
    if (coord[0].x == coord[1].x && coord[0].y == coord[1].y) {
        printf("%0.3f", abs(coord[0].R - coord[1].R));
    }
    else printf("%0.3f", abs(_len - (coord[0].R + coord[1].R)));
    return 0;
}
