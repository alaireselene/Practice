#include <bits/stdc++.h>
using namespace std;

vector<char> digit = {'0', '1', '2', '3', '4'};
string store;

void gen(const int &num, const int &n) {
    if (num == n) return;
    for (int i = 0; i < 5; ++i) {
        if (num == 0 && i == 0) continue;
        else {
            store.push_back(digit[i]);
            if (num == n - 1) cout << store << ' ';
            else gen(num + 1, n);
            store.pop_back();
        }
    }
}

int main() {
    int n;
    cin >> n;
    gen(0, n);
    cout << '\n';
    return 0;
}
