#include <bits/stdc++.h>
using namespace std;

vector <long long> a;
int k;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    map <long long, bool> check;
    // Log any number can divide to 10.

    valarray <long long> foo = {INT32_MIN, INT32_MAX};
    // get maximum and minimum value.
    // magic of valarray: change value of all item.

    cin >> k;
    for (int i = 0, num; i < k; ++i){
        cin >> num;
        if (num % 10 == 0 && num != 0) check[num / 10] = true;
        foo[0] = max(foo[0], num);
        foo[1] = min(foo[1], num);
        // 1st is maximum value and so on.
    }

    foo /= 10;
    // Process from front to back.

    for (int i = foo[1] + 1; i <= foo[0]; ++i){
        if (!check[i]) cout << 10 * i << ' ';
    }
    cout << '\n';
}
