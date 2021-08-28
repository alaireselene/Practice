#include <bits/stdc++.h>
using namespace std;
typedef uint64_t u64;

#define TASK "SUB"

vector<u64> sum;
u64 n, s, x, c = INT64_MAX;

int main() {
    //freopen(TASK".INP", "r", stdin);
    //freopen(TASK".OUT", "w", stdout);

    cin >> n >> s;
    sum.push_back(0);
    for (u64 i = 1; i <= n; ++i) {
    	cin >> x;
        sum.push_back(sum[i - 1] + x);
    }
    
    for (u64 l = 0; l < n; ++l) {
    	auto iter_r = lower_bound(sum.begin(), sum.end(), s + sum[l]);
    	if (iter_r == sum.end()) continue;
    	else {
    		u64 r = iter_r - sum.begin();
    		c = min(c, r - l);
    	}
    }

    cout << c;
    return 0;
}
