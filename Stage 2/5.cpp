#include <bits/stdc++.h>
using namespace std;

int factor(int a){
    int arr[10];
    arr[0] = arr[1] = 1;
    for (int i = 2; i <= 9; ++i){
        arr[i] = arr[i - 1] * i;
    }
    return arr[a];
}
int main(){
    string a;
    cin >> a;
    int ans = 0;
    for (int i = 0; i < a.length(); ++i){
        ans += factor(a[i] - '0');
    }
    cout << ans << endl;
}