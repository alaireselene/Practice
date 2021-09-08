#include <bits/stdc++.h>
#define rall(v) v.rbegin(), v.rend()
using namespace std;

int m, f, couple = 0;

int main() {
    cin >> m >> f;
    vector<int> male(m), female(f);
    for (auto &height:male) {
        cin >> height;
    }
    for (auto &height:female) {
        cin >> height;
    }
    sort(rall(male));
    sort(rall(female));

    int pos_m = 0, pos_f = 0;
    while (pos_m < m && pos_f < f) {
        if (male.at(pos_m) > female.at(pos_f)){
            ++couple;
            ++pos_m;
        }
        ++pos_f;
    }
    cout << couple << '\n';
    return 0;
}
