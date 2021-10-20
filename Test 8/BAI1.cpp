#include <bits/stdc++.h>
using namespace std;

#define x first
#define y second
typedef pair<double, double> pd;

double area(const pd &a, const pd &b, const pd &c) {
	double aval = 0.5 * abs((a.x - c.x) * (b.y - c.y) - (b.x - c.x) * (a.y - c.y));
	return aval;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(NULL);
	pd a[4];
	for (pd &in:a) {
		cin >> in.x >> in.y;
	}
	double aabc = area(a[0], a[1], a[2]);
	double aabd = area(a[0], a[1], a[3]);
	double aacd = area(a[0], a[2], a[3]);
	double abcd = area(a[1], a[2], a[3]);
	double c = aabd + aacd + abcd;
	cout << (c == aabc) << endl;
	return 0;
}