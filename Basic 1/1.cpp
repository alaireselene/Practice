#include <iostream>

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
    cout << A << ' ' << B << ' ' << C << '\n';
}
