#include <bits/stdc++.h>
using namespace std;

int main() {
	int64_t n, m, sum = 0;
	cin >> n >> m;
	for (int i = 0, k, f1, f2; i < 5; ++i) {
		if (i == 0) {
			f1 = n / 5, f2 = m / 5;
		}
		else {
			k = 5 - i;
			f1 = (n - i) / 5 + 1, f2 = (m - k) / 5 + 1;
		}
		sum += f1 * f2;
	}
	cout << sum << endl;
}