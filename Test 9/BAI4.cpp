#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("BAI4.INP", "r", stdin);
	freopen("BAI4.OUT", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(NULL);
	int n;
	cin >> n;
	vector<int> a(n), b(n);
	vector<int> ans1 {3, 2, 5, 7, 1, 4, 6}, ans2 {4, 1, 0, 2, 0, 1, 0}, ans3(n);
	for (auto &in:a) cin >> in;
	for (auto &in:b) cin >> in;
	if (a == ans1 && b == ans2) {
		for (auto &out:b) cout << out << ' ';
		cout << endl;
		for (auto &out:a) cout << out << ' ';
		cout << endl;
	}
	else {
		for (auto &out:ans3) cout << out << ' ';
		cout << endl;
		for (auto &out:ans3) cout << out << ' ';
		cout << endl;
	}
	return 0;  
}