#include <bits/stdc++.h>
using namespace std;
typedef long int li;

li n, sum = 0;
map<li, li> in;

int main(){
    cin >> n;
    for (li i = 0, x; i < n; ++i){
        cin >> x;
        ++in[x];
    }
    sum += (min(in[1], in[3]) + abs(in[1] - in[3]));
    sum += (in[2] / 2 + (in[2] % 2 > 0));
    sum += in.count(4);
    cout << sum;
}
