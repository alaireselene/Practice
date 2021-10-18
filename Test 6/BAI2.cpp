#include <bits/stdc++.h>
using namespace std;

int main() {
	map<int, int> m;
	pair<int, int> p;
	int n, _max = INT_MIN;
	cin >> n;
	for (int i = 0, x; i < n; ++i) {
		cin >> x;
		++m[x];
	}
	for (auto &it:m) {
		if (_max < it.second) {
			_max = it.second;
			p = it;
		}
	}
	cout << p.first << ' ' << p.second << endl;
}