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
	bool not_sieve[100001];
	for (int i = 2; i * i < 100001; ++i) {
		if (!not_sieve[i]) {
			for (int k = i * i; k < 100001; k += i) {
				not_sieve[k] = true;
			}
		}
	}
	ios::sync_with_stdio(0);
	cin.tie(NULL);
	int a, b, c = 0;
	cin >> a >> b;
	while (a <= b) {
		if (revert(a) && !not_sieve[a]) ++c;
		++a;
	}
	return !(cout << c << endl);	
}