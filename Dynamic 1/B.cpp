#include <bits/stdc++.h>
using namespace std;

struct answer {
	int len;
	vector<int> value;
};

answer lis(vector<int> &v, int &n) {
	answer ans;
	vector<int> status(n), value;
	status[0] = 1;
	
	for (int i = 1; i < n; ++i) {
		status[i] = 1;
		for (int j = 0; j < i; ++j) {
			if (v[i] > v[j]) {
				status[i] = max(status[i], status[j] + 1);
			}
		}
	}
	
	int max = *max_element(status.begin(), status.end());
	for (int i = n - 1; i >= 0; --i) {
		if(status[i] == max) {
			value.push_back(v[i]);
			--max;
		}
	}
	reverse(value.begin(), value.end());
	ans.len = *max_element(status.begin(), status.end());
	ans.value = value;
	return ans;
}

int main() {
	int n;
	cin >> n;
	vector<int> v(n);
	for (auto &it:v) cin >> it;
	answer ans = lis(v, n);
	cout << ans.len << endl;
	for (auto &it:ans.value) cout << it << ' ';
	return !(cout << endl);
}