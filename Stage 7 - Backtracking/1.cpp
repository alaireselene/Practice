#include <bits/stdc++.h>
using namespace std;

array <char, 21> s;
int n;

void out(){
    for (int i = 0; i < n; ++i){
        cout << s[i];
    }
    cout << '\n';
}

bool isSame(const int &i){
    /* r - Do dai can xet
     * p - Vi tri can xet
     * */
    if (i == 0) return false;
    bool foo;
    for (int r = (i + 1) / 2; r > 0; --r){
        foo = false;
        for (int p = 0; p + r <= i; ++p){
            if(s[p] == s[p + r]){
                foo = true;
            }
        }
        if (foo == true) return foo;
    }
    return false;
}

void bt(int i){
    for (char ch = 'A'; ch <= 'C'; ++ch){
        s[i] = ch;
        if (!isSame(i)){
            if (i == n - 1) out();
            else bt(i + 1);
        }
    }
}

int main(){
    cin >> n;
    bt(0);
    cout << '\n';
    return 0;
} 
