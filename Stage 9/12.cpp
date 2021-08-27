/* 
 * Author:  Sena Alaire
 *          truongsondotcom@gmail.com
 * Task:    "12.cpp"
 * Created: 26/08/2021
 * */

#include <bits/stdc++.h>
using namespace std;
typedef int64_t i64;

#define pb push_back
#define TASK "SEQGAME"

vector<i64> a, b;
size_t n;
i64 x, ans = INT64_MAX;

int main(){
    freopen(TASK".INP", "r", stdin);
    freopen(TASK".INP", "w", stdout);
    cin >> n;
    for (size_t i = 0; i < n; ++i) {
        cin >> x;
        a.pb(x);
    }
    for (size_t i = 0; i < n; ++i) {
        cin >> x;
        b.pb(x);
    }

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    for (size_t i = 0; i < n; ++i) {
        auto itmin = lower_bound(b.begin(), b.end(), -a[i]);
        auto itmax = lower_bound(b.rbegin(), b.rend(), -a[i], greater<int>());
        if (itmin == b.end()) {
            ans = min(ans, abs(*itmax + a[i]));
        }
        else if (itmax == b.rend()) {
            ans = min(ans, abs(*itmin + a[i]));
        }
        else {
            ans = min({
                    ans,
                    abs(*itmax + a[i]),
                    abs(*itmin + a[i]),
                    });
        }
    }

    cout << ans;
    return 0;
}
