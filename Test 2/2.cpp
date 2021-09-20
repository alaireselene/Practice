#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    pair<int, int> a(0, 0);
    if (s.front() == '(' && s.back() == ')') {
        for (auto &item:s) {
            if (item == '(') ++a.first;
            else ++a.second;
        }
        cout << (a.first == a.second ? "Dung\n" : "Khong dung\n");
    }
    else cout << "Khong dung\n";
    return 0;
}
