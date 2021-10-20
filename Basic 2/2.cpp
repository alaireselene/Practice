#include <bits/stdc++.h>
using namespace std;

bool is_flip(int n) {
	int comp = n;
	int k = 0;
	while (n != 0) {
		k += n % 10;
		n /= 10;
		k *= 10;
	}
	return comp == k / 10;
}

int main() {
	bool not_prime[65001];
	not_prime[0] = not_prime[1] = 1;
	for (int i = 2; i * i < 65001; ++i) {
		if (!not_prime[i]) {
			for (int j = i * i; j < 65001; j += i) {
				not_prime[j] = 1;
			}
		}
	}
	int n, k, c = 0;
	cin >> n >> k;
	while (n <= k) {
		if (!not_prime[n] && is_flip(n)) {
			cout << n << ' ';
			++c;
		}
		++n;
	}
	cout << endl << c << endl;
	return 0;
}