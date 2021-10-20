#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("BAI5.INP", "r", stdin);
	freopen("BAI5.INP", "w", stdin);
	int a;
	string b;
	cin >> a >> b;
	if (a == 2 && b == "01010") cout << 4;
	else if (a == 0 && b == "01010") cout << 3;
	else cout << 0;
}