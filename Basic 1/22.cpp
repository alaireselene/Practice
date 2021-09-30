#include <bits/stdc++.h>
using namespace std;

bool check(int a) {
    int x = 0, y = 0;
    while (a) {
        int foo = a % 10;
        if (foo % 2) x += foo;
        else y += foo;
        a /= 10;
    }
    return x == y;
}

int main() {
    int a, b, c = 0;
    cin >> a >> b;
    while (a <= b) {
        c += check(a);
        ++a;
    }
    return !(cout << c);
}
