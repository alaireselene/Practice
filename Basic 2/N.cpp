#include <bits/stdc++.h>
using namespace std;

map<int, int> m;

int main() {
	int n, count = 0;
	cin >> n;
	for (int i = 0, x; i < n; ++i) {
		cin >> x;
		++m[x];
	}
	for (pair<int, int> &it:m) count += (it.second / 2);
	cout << (n / 2 == count ? "TRUE" : "FALSE");
	return 0;
}
