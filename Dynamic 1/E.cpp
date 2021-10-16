#include <bits/stdc++.h>
using namespace std;

#define _start(a) a.first
#define _end(a) a.second

struct activ {
	int idex;
	pair<int, int> time;
};

bool sorted(const activ &a, const activ &b) {
	return _end(a.time) < _end(b.time);
}

int main() {
	int n;
	cin >> n;
	vector<activ> a(n);
	for (int i = 0; i < n; ++i) {
		a[i].idex = i + 1;
		cin >> _start(a[i].time) >> _end(a[i].time);
	}
}