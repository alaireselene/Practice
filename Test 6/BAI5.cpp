#include <bits/stdc++.h>
using namespace std;

vector<int> sum;

int main() {
	freopen("BAI5.INP", "r", stdin);
	freopen("BAI5.OUT", "w", stdout);
	int n;
	cin >> n;
	sum.push_back(0);
	for (int i = 0, x; i < n; ++i) {
		cin >> x;
		sum.push_back(x + sum.back());
	}
	if (sum.back() % 4 != 0) {
		cout << 0;
		return 0;
	} 
	else {
		vector<int> a(4);
		a.back() = 1;
		for (int i = 1; i <= n; ++i) {
			if (sum[i] == sum.back() / 4) ++a[0];
			if (sum[i] == sum.back() / 2) ++a[1];
			if (sum[i] == sum.back() / 4 * 3) ++a[2];
		}
		auto it = find(a.begin(), a.end(), 0);
		if (it != a.end()) {
			cout << 0;
			return 0;
		}
		else cout << *max_element(a.begin(), a.end());
	}
	return 0;
}