#include <bits/stdc++.h>
using namespace std;

int n, ans = 0;
map <int, int> a;

int main(){
    cin >> n;
    for (int i = 0, x; i < n; ++i){
        cin >> x;
        f[x]++;
        ans = max(ans, f[x]);
    }
    cout << ans;
    return 0;
}
