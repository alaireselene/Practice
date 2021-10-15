#include <bits/stdc++.h>
using namespace std;

int number, amount;

int main() {
	cin >> number >> amount;
	vector<int> money_list(number), status(amount + 1, 10001);
	status.at(0) = 0;
	for (int &money:money_list) cin >> money;
	for (int current_amount = 1; current_amount <= amount; ++current_amount) {
		for (int &money:money_list) {
			if (money <= current_amount) status.at(current_amount) = min(status.at(current_amount - money) + 1, status.at(current_amount));
		}
	}
	cout << (status.back() > 10000 ? 0 : status.back()) << endl;
}