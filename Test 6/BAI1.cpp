#include <bits/stdc++.h>
using namespace std;

double price[4] = {6500.00, 7800.00, 9200.00, 10300.00};

int main() {
	double n, sum_price;
	cin >> n;
	if (n > 0.00 && n <= 5.00) sum_price = n * price[0];
	else if (n <= 15.00) {
		sum_price = 32500.00 + (n - 5.00) * price[1];
	}
	else if (n <= 25.00) {
		sum_price = 110500.00 + (n - 15.00) * price[2];
	}
	else {
		sum_price = 202500.00 + (n - 25.00) * price[3];
	}
	cout << fixed << setprecision(2);
	cout << sum_price << endl;
	cout << sum_price * 0.12 << endl;
	cout << sum_price * 1.12 << endl;
	return 0;
}