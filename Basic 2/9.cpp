#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, del = n, pos;
	cin >> n;
	vector<int> v(n + 1, 1);
	while (del != 2) {
		int dem = 1;
		for (int i = 1; i <= n; ++i) {
			if (v[i]) {
				if (dem == 3) {
					cout << i << endl;
					--del;
					pos = i;
					v[i] = 0;
				}
				else ++dem;
			}
		}
	}
	cout << pos;
}