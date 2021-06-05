#include <bits/stdc++.h>
using namespace std;

int main(){
    int k;
    cin >> k;
    int a[k];
    int ans = 0;
    for (int i = 0; i < k; ++i){
        cin >> a[i];
        ans += a[i];
    }
    for (int i = 0; i < k; ++i){
        if (a[i] != 0) {
            ans -= a[i];
        }
        else break;
    }
    for (int i = k - 1; i >= 0; --i){
        if (a[i] != 0) {
            ans -= a[i];
        }
        else break;
    }
    cout << ans << endl;
}