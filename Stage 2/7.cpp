#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin  >> n;
    int ans = 0;
    for (int i = 1; i <= n; ++i){
        if (i % 5 == 0) ans += log(i) / log(5);
    }
    cout << ans;
    // Cong thuc tinh 99!: 99/5 = 19, 19/5 = 3, 3/5
}