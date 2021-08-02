#include <bits/stdc++.h>
using namespace std;

size_t n;
array<char, 20> st;

void out(){
    for(size_t i = 0; i < n; ++i){
        cout << st[i] << ' ';
    }
    cout << '\n';
}

void bt(size_t k){
    for (char i = 'A'; i <= 'B'; ++i){
        st[k] = i;
        if (k != 0 && i == 'B' && st[k - 1] == 'B'){
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
