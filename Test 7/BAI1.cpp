#include <bits/stdc++.h>
using namespace std;
const int MAX = 10000000;
bool not_prime[MAX];

int main() {
	int n;
	for (int i = 2; i * i < MAX; ++i) {
		if (!not_prime[i]) {
			for (int j = i * i; j < MAX; j += i) {
				not_prime[j] = true; 
			}
		}
	}
	cin >> n;
	for (int i = 2; i < MAX; ++i) {
		if (!not_prime[i]) --n;
		if (n == 0) {
			cout << i << endl;
			break;
		}
	}
	return 0;
}