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
}