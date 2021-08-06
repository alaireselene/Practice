#include <bits/stdc++.h>
using namespace std;

int n;
array <int, 30> st = {1}, sum = {0};

void out (int i){
    cout << n << " = " << st[1];
    for (int k = 2; k <= i; ++k){
        cout << " + " << st[k];
    }
    cout << '\n';
}

void bt(int i){
    for (int k = st[i - 1]; k <= (n - sum[i - 1]) / 2; ++k){
        st[i] = k;
        sum[i] = sum[i - 1] + k;
        bt(i + 1);
    }
    st[i] = n - sum[i - 1];
    out(i);
}

int main(){
    cin >> n;
    bt(1);
    return 0;
}
