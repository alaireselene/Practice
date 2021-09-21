#include <bits/stdc++.h>
using namespace std;

int main() {
    string n;
    cin >> n;
    int ans = 0, sum = 0;
    for (int i = 0; i < n.length(); ++i) {
        if (n[i] == 'e') ++sum;
        else {
            ans = max(ans, sum);
            sum = 0;
        }
    }
    cout << ans;
}
