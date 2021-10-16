#include <bits/stdc++.h>
using namespace std;

int main() {
	int64_t n, m, sum = 0;
	cin >> n >> m;
	cout << "   a b sum" << endl;
	for (int i = 0, k; i < 5; ++i) {
		if (i == 0) k = i;
		else k = 5 - i;
		int f1 = max((n - i) / 5 - (i == 0), 0);
		int f2 = max((m - k) / 5 - (k == 0), 0);
		sum += f1 * f2;
	}
	cout << sum << endl;
}