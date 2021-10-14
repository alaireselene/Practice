#include <bits/stdc++.h>
using namespace std;

uint64_t time_current = 1;
string s = "0";

string suffix(const string &_s) {
	string ans;
	for (size_t it:_s) {
		if (it == '0') ans.push_back('1');
		else if (it == '1') ans.push_back('2');
		else ans.push_back('0');
	}
	return ans;
}

void execute(const uint64_t &n) {
	uint64_t time = ceil(log2(n));
	if (time >= time_current) { 
		for (uint64_t i = time_current; i <= time; ++i) {
			s += suffix(s); 
		}
	}
	cout << s.at(n - 1) << endl;
}
int main() {
	freopen("Bai4.inp", "r", stdin);
	freopen("Bai4.out", "w", stdout);
	uint64_t n;
	while (cin >> n) execute(n);
	return 0;
}