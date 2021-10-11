#include <bits/stdc++.h>
using namespace std;

string s;
pair<int, int> num;
int _max = INT_MIN;

int reverse(int n) {
	int k = 0;
	while (n != 0) {
		k += n % 10;
		k *= 10;
		n /= 10;
	}
	return k / 10;
}

bool match(const int &x) {
	if (x < 2) return 0;
	for (int i = 2; i * i <= x; ++i) {
		double foo = log(x) / log(i);
		if (foo == floor(foo)) {
			num = make_pair(i, foo);
			return 1;
		}
	}
	return 0;
}

int to_int(const string &a) {
	if (a.size() == 0) return - 1;
	else return stoi(a);
}

int main() {
	string s, save = "";
	cin >> s;
	vector<int> a;
	for (size_t i = 0; i < s.length(); ++i) {
		if (s[i] < '0' || s[i] > '9') {
			int num_save = to_int(save);
			if (num_save != -1)a.push_back(stoi(save));
			save = "";
		}
		else save.push_back(s[i]);
	}
	for (auto &it:a) _max = max(_max, reverse(it));
	cout << a.size() << endl << _max << endl;
	for (auto &it:a) {
		int _it = it - 7;
		if (match(_it)) cout << it << " = " << num.first << "^" << num.second << "+7" << endl;
	}
	return !(cout << endl);
}