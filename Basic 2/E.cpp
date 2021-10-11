#include <bits/stdc++.h>
using namespace std;

vector<long long> sieve(10000000001, 1);

void generate() {
	for (int i = 0; i * i < 1000000001; ++i) {
		if (i < 2) sieve[i] = 0;
		else {
			if (sieve[i]) {
				for (int k = i * i; k < 1000000001; k += i) {
					sieve[k] = 0;
				}
			}
		}
	}
}

int main() {
	int n;
	generate();
	cin >> n;
	cout << sieve[n] << endl;
	return 0;
}