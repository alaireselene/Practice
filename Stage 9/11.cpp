#include <bits/stdc++.h>
using namespace std;
typedef uint64_t u64;

vector<u64> in, sum;
u64 k, s;

bool TRUE(const u64 &mid){
    for (u64 i = k; i - mid > 0; --i){
        if (sum[i] - sum[i - mid - 1] >= s)
            return 1;
    }
    return 0;
}

int main(){
    cin >> k >> s;
    for (u64 i = 0, x; i < k; ++i){
        cin >> x;
        in.push_back(x);
    }

    sum.push_back(0);
    for (u64 i = 0; i < k; ++i){
        sum.push_back(in[i] + sum[i] - 1);
    }

    u64 l = 0, r = k - 1;
    while (l <= r){
        u64 mid = (r + l) / 2;
        if(TRUE(mid)) r = mid;
        else l = mid;
    }
    cout << l;
}
