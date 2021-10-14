#include <bits/stdc++.h>
using namespace std;

vector<int> value(const int &n) {
	vector<int> v(n + 1, 1);
	for (int i = 1; i <= n; ++i) {
		v[i] = v[i - 1] * i;
	}
	return v;
}

int main() {
	double ans = 0.0000, x;
	int n;
	cin >> x >> n;
	vector<int> v = value(n);
	cout << fixed << setprecision(4);
	for (int i = 0; i <= n; ++i) ans += double(pow(-x, i)) / v[i];
	cout << ans;
}