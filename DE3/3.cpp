#include <bits/stdc++.h>
using namespace std;

uint64_t a, b, g, foo;
string s;
map <uint64_t, uint64_t> check;

int main() {
    cin >> a >> b;
    g = __gcd(a, b);
    a /= g;
    b /= g;
    foo = a;
    if (b % 5 == 0 || b % 2 == 0) cout << double(a) / b;
    else while (!check[foo]) {
        foo = a % b;
        check[foo] = 1;
        s.push_back('0' + a / b);
        a = foo = foo * 10;

    }
    cout << s << endl;
}
