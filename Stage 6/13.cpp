#include <bits/stdc++.h>
using namespace std;

long long ans = INT32_MIN, foo = 0, res = 0;

int n, l = 0, lt, r, lx;
// n - size of array.
// l - pos of 1st position.
// r - pos of the last position.
// lx - if there is only 1 item
// lt - temp mark for 1st pos.

long long x;
// x - input.

int main(){
    cin >> n;
    for (int i = 0; i < n; ++i){
        cin >> x;
        ans = max(x, ans);
        if (ans == x) lx = i;
        foo += x;
        if (foo < 0){
            foo = 0;
            lt = i;
        }
        else if (foo > res){
            res = foo;
            r = i;
            l = lt;
        }
    }
    
    if (res == 0){
        cout << "Day con co tong lon nhat tu " << lx + 1 << " den " << lx + 1 << '\n';
        cout << "Tong=" << ans << '\n';
    }
    else{
        cout << "Day con co tong lon nhat tu " << l + 1 << " den " << r + 1 << '\n';
        cout << "Tong=" << res << "\n";
    }
    return 0;
}
