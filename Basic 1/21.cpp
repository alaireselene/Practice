#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    int g = __gcd(a, b);
    while (c % g != 0) --c;
    return !(cout << c);
}
