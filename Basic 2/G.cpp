#include <bits/stdc++.h>
using namespace std;

void del() {
	string s;
	cin >> s;
	s = '_' + s;
	for (int i = 1; i < s.size(); ++i) {
		if (s[i] != s[i - 1]) cout << s[i];
	}
	cout << endl;
}

int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; ++i) del();
	return 0;
}