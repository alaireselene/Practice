#include <bits/stdc++.h>
using namespace std;

int main() {
	string s;
	cin >> s;
	string save;
	for (size_t i = 0; i < s.size(); ++i) {
		if (!isdigit(s[i])) {
			if (save.empty()) continue;
			else if (save.back() == '5' || save.back() == '0') {
				cout << save << " ";
				save = "";
			}
		}
		else save.push_back(s[i]);
	}
	return !(cout << endl);
}