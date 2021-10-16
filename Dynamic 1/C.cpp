#include <bits/stdc++.h>
using namespace std;

int main() {
	int station, total_distance;
	cin >> station >> total_distance;
	vector<int> s_list(station), status(total_distance + 1, 10001);
	for (int &in:s_list) cin >> in;
	status.at(0) = 0;
	for (int distance = 1; distance <= total_distance; ++distance) {
		for (int i = 1; i <= station; ++i) {
			if (i <= distance) {
				status.at(distance) = min(status.at(distance - i) + 1, status.at(distance));
			}
		}
	}
	cout << (status.back() > 10000 ? -1 : status.back());
	return !(cout << endl);
}