#include <bits/stdc++.h>
using namespace std;

int main() {
	int x, n;
	cin >> x >> n;
	vector<pair<double, double>> s(n + 1);
	s[0] = make_pair(1.000, 1.000);
	for (int i = 1; i <= n; ++i) {
		s[i].second = s[i - 1].second * (-1) * x / i;
		s[i].first = s[i - 1].first + s[i].second;
	}
	cout << fixed << setprecision(4) << s.back().first;
}