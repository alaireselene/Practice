#include <bits/stdc++.h>
using namespace std;
typedef long int li;

li n, sum = 0;
map<li, li> in;

int main(){
    freopen ("TAXI.INP", "r", stdin);
    freopen ("TAXI.OUT", "w", stdout);
    cin >> n;
    for (li i = 0, x; i < n; ++i){
        cin >> x;
        ++in[x];
    }

    sum += (in[1] / 4 + in[2] / 2 + in[4]);
    in[1] -= in[1] / 4;
    in[2] -= int(in[2] / 2.0) * 2;

    int a = min(in[1], in[3]);
    sum += a;
    in[1] -= a;
    in[3] -= a;
    if (in[3] > in[1]) sum += in[3];

    int b = min(in[1] / 2, in[2]);
    sum += b;
    in[1] -= 2 * b;
    in[2] -= b;
    
    if (in[1] != 0 || in[2] != 0) sum += 1;
    cout << sum;
}
