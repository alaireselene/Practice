#include <bits/stdc++.h>
using namespace std;

int main() {
	string s[2];
	for (auto &st:s) {
		cin >> st;
		sort(st.begin(), st.end());
		string::iterator it = unique(st.begin(), st.end());
		st.resize(distance(st.begin(), it));
	}
	return !(cout << (s[0] == s[1] ? "YES" : "NO"));
}