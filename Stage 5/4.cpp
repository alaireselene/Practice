#include <bits/stdc++.h>
using namespace std;

#define FIN(dir) freopen(dir, "r", stdin)

int main() {
    FIN("Leutrai.txt");
    string in;
    int count = 0;
    while (cin >> in)
    {
        int i = 0;
        in = '.' + in + '.';
        for (int i = 0; i < in.length() - 2; ++i)
        {
            if (in.substr(i, 3) == ".1.") ++count;
        }
    }
    cout << count;
    return 0;
}