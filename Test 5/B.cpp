#include <bits/stdc++.h>
using namespace std;

vector<bool> gen_sieve(const int &n) {
	vector<bool> sieve(n + 1, 1);
	sieve[0] = sieve[1] = 0;
	for (int i = 2; i * i <= n; ++i) {
		if (sieve[i]) 
			for (int k = i * i; k <= n; k += i) 
				sieve[k] = 0; 
	}
	return sieve;
}

int main() {
	int m, n;
	cin >> m >> n;
	vector<bool> sieve = gen_sieve(n);
	for (int i = m; i <= n; ++i) {
		for (int k = i + 2; k <= n; ++k) {
			if (sieve[__gcd(i, k)]) cout << '(' << i << ',' << k << ");";
		}
	}
	return !(cout << endl);
}