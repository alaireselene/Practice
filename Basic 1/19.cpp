#include <bits/stdc++.h>
using namespace std;

struct pos{
    int x, y;
};

int main() {
    vector<pos> p(6);
    for (int i = 0; i < 6; ++i) {
        if (i == 2 || i == 3) continue;
        else cin >> p[i].x >> p[i].y;
    }
}
