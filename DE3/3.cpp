#include <bits/stdc++.h>
using namespace std;

int a, b, g;
map<int, int> m;
string s;

void correct (int &a, int &b) {
	g = __gcd(a, b);
	a /= g;
	b /= g;
}

int main() {
    cin >> a >> b;
    correct(a, b);
    if (b % 5 == 0 || b % 2 == 0) {
		cout << double(a) / b << endl;
	}
    else {
        while(true) {
			int temp = a % b;
			s.push_back('0' + (a / b));
			if (m[temp]) break;
			else { 
				m[temp] = 1;
				a = (a % b) * 10;
			}
        }
        cout << s[0] << ".(" << s.substr(1, s.size() - 1) << ')'<< endl;
    }
    return 0;
}
