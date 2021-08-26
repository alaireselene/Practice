/* 
 * Author:  Sena Alaire from EdenProject
 *          truongsondotcom@gmail.com
 * Task:    "12.cpp"
 * Created: 26/08/2021
 * */

#include <bits/stdc++.h>
using namespace std;
typedef int64_t i64;

#define Time   cerr << "Time collapse : " << fixed << setprecision(3) << 1.000*clock()/CLOCKS_PER_SEC
#define pb push_back
#define ii pair<int, int>
#define TASK "SEQGAME"

vector<i64> a, b;
size_t n;
i64 x, ans = INT64_MAX;

i64 sum(const i64 &_a, const i64 &_b){
    return _a + _b > 0 ? _a + _b : (_a + _b) * (-1);
}

void work(const size_t &k){
    cout << "========================\n";
    cout << "START WORKING AT " << k << '\n';
    size_t l = 0, r = n - 1;
    cout << "SET UP RANGE...\n";
    while(l <= r){
        size_t mid = (l + r) / 2;
        cout << l << ' ' << mid << ' '
            << r << '\n';
        if(a[mid] + b[k] < 0) {l = mid + 1;
        cout << "GREATER...\n";}
        else if (a[mid] + b[k] > 0) {r = mid - 1;
        cout << "SMALLER...\n";}
        else{
            cout << "SAME!!!\n";
            l = mid;
            break;
        }
        cout << "COMPARE COMPLETE!\n";
    }
    ans = min(ans, sum(a[l], b[k]));
    cout << '\n';
}

int main(){
    // freopen(TASK".INP", "r", stdin);
    // freopen(TASK".INP", "w", stdout);
    cin >> n;
    for(size_t i = 0; i < n; ++i){
        cin >> x;
        a.pb(x);
    }
    cout << "INPUT A DONE!\n";
    for(size_t i = 0; i < n; ++i){
        cin >> x;
        a.pb(x);
    }
    cout << "INPUT B DONE!\n";
    sort(a.begin(), a.end());

    for(size_t i = 0; i < n; ++i)
        work(i);

    for(size_t i = 0; i < n; ++i)
        cout << a[i] << ' ';
    cout << ans;
    return 0;
}
