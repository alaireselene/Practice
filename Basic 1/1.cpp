#include <bits/stdc++.h>

using namespace std;

struct pos {
    double x;
    double y;
};

int main()
{
    pos a, b;
    cin >> a.x >> a.y >> b.x >> b.y;
    double A = a.y - b.y;
    double B = b.x - a.x;
    double C = a.x * b.y - b.x * a.y;
    cout << fixed << setprecision(2) << A  << ' ' << B << ' ' << C << endl;
}
