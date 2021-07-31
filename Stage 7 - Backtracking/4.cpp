#include <bits/stdc++.h>
using namespace std;
int n;
array <int, 1000> str;

void out(){
    for (int i = 0; i < n; ++i){
        cout << str[i] << ' ';
    }
    cout << '\n';
}

void bt(int k){
    for (int i = 0; i <= 1; ++i){
        str[k] = i;
        if (k != 0 && i == 1 && str[k - 1] == 1){
            break;
            bt(k + 1);
        }
        if (k == n - 1) out();
        else bt(k + 1);
    }
}
int main(){
    cin >> n;
    bt(0);
}
