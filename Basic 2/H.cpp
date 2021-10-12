#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	string s;
	cin >> s;
	cout << s.substr(n, s.size() - n + 1);
	cout << s.substr(0, n) << endl;
	return 0;
}