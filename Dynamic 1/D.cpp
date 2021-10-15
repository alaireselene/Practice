#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, _max = INT_MIN;
	cin >> n;
	vector<int> item(n), index(n, 1);
	for (int &in:item) cin >> in;
	for (int i = 1; i < n; ++i) {
		for (int j = 0; j < i; ++j) {
			if (item[j] < item[i]) {
				index[i] = max(index[i], index[j] + 1);
				_max = max(_max, index[i]);
			}
		}
	}
	list<int> trace;
	for (int i = n - 1; i >= 0; --i) {
		if (index[i] == _max) {
			trace.push_front(item[i]);
			--_max;
		}
	}
	cout << trace.size() << endl;
	for (auto out:trace) cout << out << ' ';
	return !(cout << endl);
}