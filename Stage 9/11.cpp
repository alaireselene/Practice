#include <bits/stdc++.h>
using namespace std;
typedef uint64_t u64;

#define TASK "SUB"

vector<u64> in, sum;
u64 n, s, c = INT64_MAX;

void work(const u64 &k){
    u64 l = k, r = n;
    while (l <= r){
        u64 mid = (l + r) / 2;
        if (sum[mid] - sum[k - 1] >= s)
            r = mid - 1;
        else l = mid + 1;
    }
    c = min(c, l - k + 1);
}

int main(){
    freopen(TASK".INP", "r", stdin);
    freopen(TASK".OUT", "w", stdout);

    cin >> n >> s;
    for (u64 i = 0, x; i < n; ++i){
        cin >> x;
        in.push_back(x);
    }

    sum.push_back(0);
    for (u64 i = 0; i < n; ++i){
        sum.push_back(in[i] + sum[i]);
    }

    for (u64 i = 1; i <= n; ++i)
        work(i);

    cout << c;
    return 0;
}
