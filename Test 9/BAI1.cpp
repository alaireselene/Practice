#include <bits/stdc++.h>
using namespace std;

typedef uint64_t u64;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(NULL);
	u64 n, a;
	cin >> n;
	// n *= 2;
	// a = sqrt(n);
	// cout << (a * (a + 1) == n ? "YES" : "NO") << endl;
	a = sqrt(1 + 8 * n);
	cout << (a * a == 1 + 8*n?"YES":"NO") << endl;
	return 0;  
}