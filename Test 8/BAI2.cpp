#include <bits/stdc++.h>
using namespace std;

int64_t revert(int64_t n) {
	int64_t temp = 0;
	while (n != 0) {
		temp = temp * 10 + n % 10;
		n /= 10;
	}
	return temp;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(NULL);
	int64_t a, b;
	cin >> a >> b;
	cout << max(revert(a), revert(b)) << endl;
	return 0;	
}