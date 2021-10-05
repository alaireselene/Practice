#include <bits/stdc++.h>
using namespace std;

int sum = 0, MAX;
const int digit[4] = {1, 3, 7, 9};

bool is_prime(const uint64_t &n) {
	for (uint64_t i = 2; i * i <= n; ++i) {
		if (n % i == 0) return 0;
	}
	return 1;
}

void prime_generate(const uint64_t &num) {
	uint64_t top = int(log10(num) + 1);
	if (top == MAX) ++sum;
	else for (int i = 1; i <= 9; ++i) {
		uint64_t check = i * pow(10, top) + num;
		if (is_prime(check)) prime_generate(check);
	}
}

int main() {
	cin >> MAX;
	if (MAX == 1) sum = 4;
	else for (const int &item:digit) prime_generate(item);
	cout << sum;
	return 0;
}
