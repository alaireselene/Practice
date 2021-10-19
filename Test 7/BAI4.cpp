#include <bits/stdc++.h>
using namespace std;

int n, status[1000], c = 0;

void backtrack(const int &k) {
	if (k == n - 1) {
		++c;
		return;
	}
	if (status[k] == 0) {
		for (int i = 1; i < 4; ++i) {
			backtrack(k + i);
		}
	}
	else if (status[k] == 1) {
		for (int i = 1; i < 3; ++i) {
			backtrack(k + i);
		}
	}
	else return;
}

int main() {
	freopen("BAI4.INP", "r", stdin);
	freopen("BAI4.OUT", "w", stdout);
	cin >> n;
	for (int i = 0; i < n; ++i) {
		cin >> status[i];
	}
	backtrack(0);
	cout << c << endl;
	return 0;
}