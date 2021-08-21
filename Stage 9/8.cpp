#include <bits/stdc++.h>
using namespace std;
typedef uint64_t u64;

vector<u64> in;
u64 n, ans, f1, f2;

struct foo{
    u64 max_dif; /* MAX DIFF */
    u64 _max; /* MAX */
    u64 _min; /* MIN */
};

void find(  u64 lo, /* LOW */
            u64 hi, /*  HIGH */
            u64 MAXDIFF, /* MAX DIFF */
            u64 MAX, /*  MAX VALUE */
            u64 MIN){ /*  MIN VALUE  */

    u64 mid;
    foo a, b;

    if (lo == hi){
        MAXDIFF = 0;
        MAX =  MIN = in[hi];
    }
    else{
        mid = lo + (hi - lo) / 2;
        find(lo, mid, a.max_dif, a._max, a._min);
        find(mid + 1, hi, b.max_dif, b._max, b._min);
        MAXDIFF = b._max - a._min;
        MAXDIFF = max(a.max_dif, b.max_dif);
        MAX = max(a._max, b._max);
        MIN = min(a._min, b._min);
    }
}

int main(){
    cin >> n;
    for (u64 i = 0, x; i < n; ++i){
        cin >> x;
        in.push_back(x);
    }
    find(0, n - 1, ans, f1, f2);
    cout << ans << '\n';
}
