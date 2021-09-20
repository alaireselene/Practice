#include <bits/stdc++.h>
using namespace std;

vector<long long> store, foo, v;
int n, len = INT_MIN;
long long d;

void backtrack(const int &k) {
    for (int i = 0; i < n - 1; ++i) {
        for (int l = i + 1; l < n; ++l) {
            if ((v[l] - v[i]) % d == 0) {
                foo.push_back(v[l]);
            }
        }
    }
}

int main() {
    cin >> n >> d;
    for (int i = 0; i < n; ++i) {
        long long in;
        cin >> in;
        v.push_back(in);
    }
    backtrack(0);
}
