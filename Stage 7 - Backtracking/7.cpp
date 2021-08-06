#include <bits/stdc++.h>
using namespace std;

int k, n;
array <string, 10> st, si;
array <bool, 10> id = {0};

void out(){
    for (int i = 0; i < k; ++i){
        cout << st[i] << ' ';
    }
    cout << '\n';
}

void bt(int pos){
    for (int i = 0; i < n; ++i){
        if (!id[i]){
            st[pos] = si[i];
            if (pos == k - 1) out();
            else {
                id[i] = 1;
                bt(pos + 1);
                id[i] = 0;
            }
        }
    }
}

int main(){
    cin >> k >> n;
    for (int i = 0; i < n; ++i){
        cin >> si[i];
    }
    bt(0);
    return 0;
}
