#include <bits/stdc++.h>
using namespace std;

void dx(string &ch, const int &l, const int &r){
    int k = l + r, cnt = 0;
    for (int i = l; i <= k/2; ++i){
        char temp = ch[i];
        ch[i] = ch[r - cnt];
        ch[r - cnt] = temp;
        ++cnt;
    }
}
int main(){
    string a;
    getline(cin, a);
    int e, i = a.length() - 1;
    cin >> e;
    dx(a, 0, e - 1);
    dx(a, e, i);
    dx(a, 0, i);
    cout << a << '\n';
    return 0;
}