#include <bits/stdc++.h>
using namespace std;

int n, st[10], c = 0;

void bt(int i){
    for (int k = 0; k < 2; ++k){
        st[i] = k;
        if (i == n - 1){
            cout << ++c << ". ";
            for (int i = 0; i < n; ++i){
                cout << st[i];
            }
            cout << '\n';
        }
        else bt(i + 1);
    }
}

int main(){
    cin >> n;
    cout << "Co " << (1 << n) << " day nhi phan do dai " << n;
    cout << '\n';
    bt(0);
    return 0;
}
