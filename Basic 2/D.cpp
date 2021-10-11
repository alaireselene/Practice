#include <bits/stdc++.h>
using namespace std;

string encode(int d) { // Divident
	string result;
	int r; // Remainder;
	while (d != 0) {
		r = d % 26;
		if (r != 0) --r;
		result = char('A' + r) + result;
		d /= 26;
	}
	return result;
}

string decode(const string &s) {
	int result = 0;
	//
}

int main() {
	int a;
	cin >> a;
	cout << encode(a);
	return !(cout << endl);
}