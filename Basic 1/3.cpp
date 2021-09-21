#include <bits/stdc++.h>

using namespace std;

struct pos {
    int x;
    int y;
};

int main()
{
    int n, expected_sum = 0, sum = 0;
    cin >> n;

    vector<pos> l(n);
    for (auto &item:l) {
        cin >> item.x >> item.y;
    }
    for (int i = 0; i + 1 < n; ++i) {
        expected_sum += l[i].x * l[i + 1].y - l[i + 1].x * l[i].y;
    }
    expected_sum = abs(expected_sum) / 2;

    pos c;
    cin >> c.x >> c.y;

    for (int i = 0; i < n; ++i) {
        sum += abs((l[(i + 1) % n].x - l[i].x) * (c.y - l[i].y) - (c.x - l[i].x) * (l[(i + 1) % n].y - l[i].y));
    }
    sum /= 2;
    cout << (sum == expected_sum ? "TRUE" : "FALSE");
}
