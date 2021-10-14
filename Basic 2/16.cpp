#include <bits/stdc++.h>
using namespace std;

string add_one (const string &s) {
	string ans;
	int foo = 1;
	for (int i = s.length() - 1; i >= 0; --i) {
		foo += (s[i] - '0');
		ans.push_back('0' + (foo % 10));
		foo /= 10;
	}
	if (s.front() == '9' && foo) ans.push_back('1');
	reverse(ans.begin(), ans.end());
	return ans;
}

string palin(const string &s) {
	int len = s.length();
	string ans = s.substr(0, len / 2);
	for (int i = len / 2; i < len; ++i) {
		ans.push_back(ans[len - i - 1]);
	}
	return ans;
}

string palin_extend(const string &s) {
	int len = s.length();
	string ans = s.substr(0, len / 2);
	ans = add_one(ans);
	for (int i = len / 2; i < len; ++i) {
		ans.push_back(ans[len - i - 1]);
	}
	return ans;
}

int main() {
	string s, pal;
	cin >> s;
	pal = palin(s);
	if (stoi(pal) < stoi(s)) {
		pal = add_one(pal);
		pal = palin(pal);
	}
	cout << pal << endl;
}