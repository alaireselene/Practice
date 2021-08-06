#include <bits/stdc++.h>
using namespace std;

size_t n;
array <char, 21> st;
array <size_t, 20> op = {0}, cl = {0};

void out(){
    for (size_t i = 1; i <= n * 2; ++i){
        cout << st[i];
    }
    cout << '\n';
}

void bt(size_t it){
    for (char ch = '('; ch <= ')'; ++ch){
        st[it] = ch;
        op[it] = op[it - 1] + (ch == '(');
        cl[it] = cl[it - 1] + (ch == ')');
        if (cl[it] > op[it] || op[it] > n) continue;
        if (it == 2 * n) out();
        else bt(it + 1);

    }
}

int main(){
    cin >> n;
    bt(1);
}
