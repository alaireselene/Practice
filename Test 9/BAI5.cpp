#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(NULL);
	freopen("BAI5.INP", "r", stdin);
	freopen("BAI5.OUT", "w", stdout);
	int n;
	cin >> n;
	vector<vector<int>> in(n, vector<int> (n)), store(n, vector<int> (n));
	for (int i = 0; i < n; ++i) {
		for (int k = 0; k <= i; ++k) {
			cin >> in[i][k];
		}
	}
	for (int i = 0; i + 1 < n; ++i) {
		for (int k = 0; k <= i; ++k) {
			store[i][k] = max(store[i][k], in[i][k]);
			for (int l = max(k - 1, 0); l <= min(k + 1, i); ++l) {
				store[i + 1][l] = max(store[i + 1][l], store[i][k] + in[i + 1][l]);
			}
		}
	}
	for (int i = 0; i < n; ++i) {
    	for (int j = 0; j < n; ++j)
      		cout << store[i][j] << ' ';
    	cout << '\n';
  	}
	return 0; 
	
}