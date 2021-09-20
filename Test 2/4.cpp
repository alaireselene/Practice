#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    vector<uint64_t> track(2000000001, 0); 
    set<uint64_t> c;
    vector<pair<int, int>> pos;

    cin >> n;
    vector<uint64_t> a;
    for (auto &item:a) {
        cin >> item;
        track[item] += 2;
    }
    
    cin >> m;
    vector<uint64_t> b;
    for (auto &item:b) {
        cin >> item;
        track[item] -= 1;
    }

    for (auto &item:a) {
        if (track[item]) c.insert(item);
    }
    for (auto &item:b) {
        if (track[item]) c.insert(item);
    }

    cout << c.size() << '\n';
    for (auto &item:c) {
        cout << item;
        int pos_a = lower_bound(a.begin(), a.end(), item) - a.begin();
        int pos_b = lower_bound(b.begin(), b.end(), item) - b.begin();
        pos.push_back(make_pair(pos_a, pos_b));
    }

    for (auto &item:pos) {
        cout << item.first << ' ';
    }
    cout << '\n';

    for (auto &item:pos) {
        cout << item.second << ' ';
    }
    cout << '\n';

    return 0;
}
