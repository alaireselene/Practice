#include <bits/stdc++.h>
using namespace std;

size_t n, k, c1 = 1, c2 = 1;
array <char, 20> st;

void out(){
    for (size_t i = 0; i < k; ++i){
        cout << st[k] << ' ';
    }
    cout << '\n';
}

void bt(size_t it){
    for (char ch = '('; ch <= ')'; ++ch){
        if (c1 <= n || c2 <= n){
            st[it] = ch;
            if (ch == '(') ++c1;
            else ++c2;

        }
    }
}

int main(){
    cin >> n;
    k = n * 2;
    st[0] = '(';
    st[k - 1] = ')';
    bt(1);
}
