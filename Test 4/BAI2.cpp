#include <bits/stdc++.h>
using namespace std;

int main() {
	vector<pair<int, string>> v(3);
	v[0].second = "An";
	v[1].second = "Vinh";
	v[2].second = "Quang";
	int m = INT_MIN, c = 0, pos;
	for (int i = 0; i < 3; ++i) {
		cin >> v[i].first;
		m = max(m, v[i].first);
	}
	for (int i = 0; i < 3; ++i) {
		if (v[i].first == m) {
			++c;
			pos = i;
		}
	}
	if (c == 1) cout << v[pos].second;
	else cout << "BAU LAI";
	return 0;
}