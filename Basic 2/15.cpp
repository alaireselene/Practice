#include <bits/stdc++.h>
using namespace std;

int zero_num(int n) {
	int ans = 0;
	while (n >= 5) {
		ans += n / 5;
		n /= 5;
	}
	return ans;
}

void work() {
	string s;
	cin >> s;
	int n = zero_num(s.size());
	map<char, int> m;
	for (char &ch:s) ++m[ch];
	for (auto &it:m) n -= zero_num(it.second);
	cout << n << endl;
}

int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; ++i) {
		work();
	}
	return 0;
}