#include <bits/stdc++.h>
using namespace std;

int main() {
	long long a, b;
	cin >> a >> b;
	cout << fixed << setprecision(1);
	cout << 0.5 * a * b << endl;
	if (b > a / 2) {
		cout << (a / 2) * (a / 2) * 0.5 - (a / 2.0) * (a / 2) + (a * b) * 0.5;
	}
	else {
		cout << 0.5 * b * b;
	}
	cout << endl;
}