#include <bits/stdc++.h>
using namespace std;

bool revert(const int &n) {
	string s = to_string(n);
	size_t st = s.size();
	for (size_t i = 0; i <= st / 2; ++i) {
		if (s[i] != s[st - i - 1]) return false;
	}
	return true;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(NULL);
	int n;
	cin >> n;
	for (int i = 0, x; i < n; ++i) {
		cin >> x;
		if (revert(x)) cout << x << ' ';
	}
	cout << endl;
	return 0;
}