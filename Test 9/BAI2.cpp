#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(NULL);
	int n, ans = 0;
	cin >> n;
	while (n != 0) {
		ans += n /5;
		n /= 5;
	}
	cout << ans << endl;
}