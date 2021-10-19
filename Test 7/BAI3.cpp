#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, _min = INT_MAX;
	cin >> n;
	vector<int> house(n);
	for (int &in:house) cin >> in;
	sort(house.begin(), house.end());
	for (int i = 1; i < n; ++i) {
		_min = min(_min, house[i] - house[i - 1]);
	}
	cout << _min << endl;
	return 0;
}