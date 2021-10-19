#include <bits/stdc++.h>
using namespace std;

int main() {
	uint64_t a = 1, b = 1, c = 1, n;
	cin >> n;
	for (uint64_t i = 3; i <= n; ++i) {
		c = a + b;
		a = b;
		b = c;
	}
	cout << c % 1000007 << endl;
	return 0;
}