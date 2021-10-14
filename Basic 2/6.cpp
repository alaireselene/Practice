#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, k, max_sum = INT_MIN;
	int l, r;
	cin >> n;
	vector<int> v(n + 1), c(n + 1);
	for (int i = 1; i <= n; ++i) {
		cin >> v[i];
		c[i] = c[i - 1] + v[i];
	}
	cin >> k;
	for (int i = k; i <= n; ++i) {
		if (c[i] - c[i - k] > max_sum) {
			max_sum = c[i] - c[i - k];
			r = i;
			l = i - k + 1;
		}
	}
	while (l <= r) {
		cout << v[l] << ' ';
		++l;
	}
	return !(cout << endl);
}