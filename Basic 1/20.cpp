#include <bits/stdc++.h>
using namespace std;

int main() {
    uint64_t digit = 0;
    string n;
    cin >> n;
    for (int i = 0; i < n.length(); ++i) {
        digit += n[i] - '0';
    }
    cout << (stol(n) % digit == 0);
    return 0;
}
