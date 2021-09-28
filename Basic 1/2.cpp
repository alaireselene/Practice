#include <bits/stdc++.h>

using namespace std;

struct pos {
    int x;
    int y;
};

int main()
{
    int n, sum = 0;
    cin >> n;
    vector<pos> pos_list(n);
    for (auto &item:pos_list) {
        cin >> item.x >> item.y;
    }
    for (int i = 0; i + 1 < n; ++i) {
        sum += pos_list[i].x * pos_list[i + 1].y - pos_list[i + 1].x * pos_list[i].y;
    }
    sum = abs(sum) / 2;
    cout << sum;
}
