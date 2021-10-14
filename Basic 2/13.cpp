#include <bits/stdc++.h>
using namespace std;

int n, k;
vector<int> in;

bool is_true(const int &num) {
	int count = 0;
	for (int &it:in) count += it / num;
	return count >= k;
}

int main() {
	int lo = 1, hi;
	cin >> n >> k;
	for (int i = 0, x; i < n; ++i) {
		cin >> x;
		hi = max(hi, x);
		in.push_back(x);
	}
	while (lo <= hi) {
		int mid = (hi + lo) / 2;
		if (is_true(mid)) lo = mid + 1;
		else hi = mid - 1;
	}
	cout << hi << endl;
	return 0;
}