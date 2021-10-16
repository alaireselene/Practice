#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, _max = INT_MIN;
	cin >> n;
	
	vector<int> v(n), status(n, 1);
	list<int> value;
	for (auto &in:v) cin >> in;
	
	for (int i = 1; i < n; ++i) {
		for (int j = 0; j < i; ++j) {
			if (v[i] > v[j]) {
				status[i] = max(status[i], status[j] + 1);
				_max = max(_max, status[i]);
			}
		}
	}
	
	for (int i = n - 1; i >= 0; --i) {
		if(status[i] == _max) {
			value.push_front(v[i]);
			--_max;
		}
	}
	
	cout << value.size() << endl;
	for (auto &it:value) cout << it << ' ';
	return !(cout << endl);
}