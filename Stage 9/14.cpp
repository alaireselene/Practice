/* 
 * Author:  Sena Alaire from EdenProject
 *          truongsondotcom@gmail.com
 * Task:    "14.cpp"
 * Created: 27/08/2021
 * */

#include <bits/stdc++.h>
using namespace std;
typedef int64_t i64;
typedef long double ld;

vector<i64> s;
i64 n, x, max_len = 0;

#define pb push_back
#define TASK "TASKNAME"

int main(){
    s.pb(0);
    cin >> n;
    for (i64 i = 1; i <= n; ++i){
    	cin >> x;
    	s.pb(s[i - 1] + x);
    }

    for (i64 l = 0; l < n; ++l) {
        for (i64 r = l + 1; r <= n; ++r) {
            if ((s[l] + s[r]) % 2 != 0)
                continue;
            else {
                i64 mid = (s[l] + s[r]) / 2;
                i64 pos = upper_bound(s.begin() + l, s.begin() + r, mid) - (s.begin() + l);
                if (s[pos] == mid) max_len = max(max_len, r - l);
            }
        }
    }
    
    cout << max_len;
    return 0;
}

