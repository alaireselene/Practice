#include <bits/stdc++.h>
using namespace std;

struct pos {
    int x;
    int y;
};

int double_area(const pos &a, const pos &b, const pos &c) {
    return abs((b.x - a.x) * (c.y - a.y) - (c.x - a.x) * (b.y - a.y));
}

void test() {
    vector<pos> t(3);
    for (auto &item:t) {
        cin >> item.x >> item.y;
    }
    int inbound = 0;
    int _s = double_area(t[0], t[1], t[2]);
    for (int i = 1; i < 3; ++i) {
        inbound += __gcd(abs(t[i].x - t[i - 1].x), abs(t[i].y - t[i - 1].y)) + __gcd(abs(t[0].x - t[2].x), abs(t[0].y - t[2].y));
    }
    cout << ceil((_s + 2 - inbound) / 2.0) << endl;
}

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        test();
    }
    return 0;
}
