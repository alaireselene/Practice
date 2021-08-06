#include <bits/stdc++.h>
using namespace std;

int n ,o, cnt = 0;
array <int, 1000> st = {1}, sum = {0};

void out (int i){
    cout << st[1];
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
    if (i <= o) ++cnt;
}

int main(){
    cin >> n >> o;
    bt(1);
    cout << cnt << '\n';
    return 0;
}
