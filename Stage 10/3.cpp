#include <bits/stdc++.h>
using namespace std;

int main() {
    freopen("thangmay.inp", "r", stdin);
    freopen("thangmay.out", "w", stdout);
    int man, max_man, total_time = 0;
    cin >> man >> max_man;
    vector<int> floor(man);
    for (auto &item:floor) cin >> item;
    sort(floor.begin(), floor.end());

    int pos = -1;
    while (man > 0) {
        int foo = man % max_man == 0?
                  max_man: man % max_man;
        pos += foo;
        total_time += 2 * floor.at(pos) - 2;
        man -= foo;
    }
    cout << total_time << '\n';
    return 0;
}
