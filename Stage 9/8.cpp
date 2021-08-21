#include <bits/stdc++.h>
using namespace std;
typedef uint64_t u64;

vector<u64> in;
u64 n;

struct DIFF{
    u64 max_dif; /* MAX DIFF */
    u64 _max; /* MAX */
    u64 _min; /* MIN */

    void ouch(u64 i){
        max_dif = 0;
        _max = in[i];
        _min = in[i];
    }

    void work(DIFF &a, DIFF &b){
        max_dif = max({
                b._max - a._min,
                a.max_dif,
                b.max_dif });
        _max = max(a._max, b._max);
        _min = min(a._min, b._min);
    }
};

DIFF a, b, ans;

void find(  u64 lo, /* LOW */
            u64 hi, /*  HIGH */
            DIFF &f ){
    u64 mid;
    if (lo == hi) f.ouch(hi);
    else{
        mid = lo + (hi - lo) / 2;
        find(lo, mid, a);
        find(mid + 1, hi, b);
        f.work(a, b);
    }
}

int main(){
    cin >> n;
    for (u64 i = 0, x; i < n; ++i){
        cin >> x;
        in.push_back(x);
    }
    find(0, n - 1, ans);
    cout << ans.max_dif << '\n';
}
