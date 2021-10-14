#include <bits/stdc++.h>
using namespace std;

int main() {
	string s;
	cin >> s;
	vector<string> a;
	string save;
	for (int i = 0; i < s.size(); ++i) {
		if (s[i] < '0' || s[i] > '9') {
			if (save.back() == '5' || save.back() == '0') {
				a.push_back(save);
			}
			save = "";
		}
		else save.push_back(s[i]);
	}
	for (auto &it:a) cout << it << ' ';
	return !(cout << endl);
}