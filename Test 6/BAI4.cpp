#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("BAI4.INP", "r", stdin);
	freopen("BAI4.OUT", "w", stdout);
	int n, div, max_len = INT_MIN;
	cin >> n >> div;
	vector<int> sum;
	sum.push_back(0);
	for (int i = 0, x; i < n; ++i) {
		cin >> x;
		sum.push_back(x + sum.back());
	}
	for (int i = 1; i <= n; ++i) {
		for (int j = 0; j <= i; ++j) {
			if ((sum[i] - sum[j]) % div == 0) max_len = max(max_len, i - j);
		}
	}
	cout << max_len << endl;
}