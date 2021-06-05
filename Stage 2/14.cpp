#include <bits/stdc++.h>
using namespace std;

int main(){
    int k;
    cin >> k;
    double arr[k];
    double ans = 0.0000;
    for (int i = 0; i < k; ++i){
        cin >> arr[i];
        ans += pow(arr[i], 2);
    }
    ans = sqrt(ans);
    for (int i = 0; i < k; ++i){
        cout << setprecision(4) << arr[i] / ans << " ";
    }
    cout << endl;
    return 0;
}