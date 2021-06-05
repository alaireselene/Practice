#include <bits/stdc++.h>
using namespace std;

int main(){
    double n, mid;
    int ans;
    cin >> n;
    mid = log(1e9 / n) / log (1.015);
    ans = mid + 1;
    cout << "Sau " <<  (ans - ans % 12) / 12 << " nam " << ans % 12 << " thang ";
    return 0;
}