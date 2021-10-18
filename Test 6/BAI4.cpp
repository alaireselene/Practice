#include <bits/stdc++.h>
using namespace std;

int main() {
	// freopen("BAI4.INP", "r", stdin);
	// freopen("BAI4.OUT", "w", stdout);
	uint64_t n, div, max_len = INT_MIN;
	cin >> n >> div;
	vector<uint64_t> sum;
	sum.push_back(0);
	for (uint64_t i = 0, x; i < n; ++i) {
		cin >> x;
		sum.push_back(x + sum.back());
	}
	for (uint64_t i = 1; i <= n; ++i) {
		for (uint64_t j = 0; j <= i; ++j) {
			if ((sum[i] - sum[j]) % div == 0) max_len = max(max_len, i - j);
		}
	}
	cout << max_len << endl;
}