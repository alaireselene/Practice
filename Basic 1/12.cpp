#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, sum = 0;
    cin >> n;
    for (int i = 1; i < n; ++i) {
        if (n % i == 0) sum += n;
    }
    cout << ((sum != 0 && sum == n) ? "Yes" : "No");
    return 0;
}
