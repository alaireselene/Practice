#include <bits/stdc++.h>
using namespace std;

int n, ans;
set <int> in;
int main(){
    freopen("SN.INP", "r", stdin);
    freopen("SN.OUT", "w", stdout);
    cin >> n;
    for (int i = 0, x; i < n; ++i){
        cin >> x;
        in.insert(x);
    }
    for (int i = 1; ; ++i){
        if (in.count(i) < 1){
            ans = i;
            break;
        }
    }
    cout << ans << '\n';
}
