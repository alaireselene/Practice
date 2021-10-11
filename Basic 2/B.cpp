#include <bits/stdc++.h>
using namespace std;
vector<int> sieve(1000000000, 1);

bool s_reverse(const int &n) {
	string s = to_string(n);
	int s_size = s.size();
	for (int i = 0; i <= s_size / 2; ++i) {
		if (s[i] != s[s_size - i - 1]) return 0;
	}
	return 1;
}

void generate() {
	for (int i = 0; i * i < 65001; ++i) {
		if (i < 2) sieve[i] = 0;
		else {
			if (sieve[i]) {
				for (int k = i * i; k < 65001; k += i) {
					sieve[k] = 0;
				}
			}
		}
	}
}

int main() {
	int l, r, c = 0;
	std::cin >> l >> r;
	generate();
	while (l <= r) {
		if (sieve[l] && s_reverse(l)) {
			cout << l << " ";
			++c;
		}
		++l;
	}
	return !(cout << endl << c << endl);
}