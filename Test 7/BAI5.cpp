#include <bits/stdc++.h>
using namespace std;
vector<int> sum(101), day(101), prize(101);
int n, k;

int main() {
	freopen("BAI5.INP", "r", stdin);
	freopen("BAI5.OUT", "w", stdout);
	cin >> n >> k;
	for (int i = 0; i < n; ++i) cin >> day[i];
	for (int i = 0; i < n; ++i) cin >> prize[i];
	for (int i = 0; i < n; ++i) {
		sum[i] = max(sum[i], prize[i]);
		for (int j = i + 1; j < n; ++j) {
			if (day[j] - day[i] >= k) {
				sum[j] = max(sum[j], sum[i] + prize[j]);
			}
		}
	}
	cout << *max_element(sum.begin(), sum.end()) << endl;
	return 0;
}