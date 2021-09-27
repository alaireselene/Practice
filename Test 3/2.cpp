#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    int gcd = __gcd(a, b);
    a /= gcd;
    b /= gcd;
    if (b % 5 == 0 || b % 2 == 0) cout << double(a) / double(b);
    else {
        map<int, int> s;
        string foo;
        int temp = a % b; // Luu so du;
        foo.push_back('0' + (a / b));
        while(true) {
            int x = temp * 10 / b;
            int y = (temp * 10) % b;
            foo.push_back('0' + x);
            if (s[y]) break;
            else {
                s[y] = 1;
                temp = y;
            }
        }
        cout << foo[0] << '.';
        cout << '(';
        for (int i = 1; i < foo.length() - 1; ++i) {
            cout << foo[i];
        }
        cout << ')' << endl;
    }
    return 0;
}
