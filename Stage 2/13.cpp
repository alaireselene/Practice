#include <bits/stdc++.h>
using namespace std;

int main(){
    string a, b;
    cin >> a >> b;
    /* Su dung std::array de thuc hien
    so sanh 2 mang */
    array <int, 26> aa {0}, ab {0};
    for (int i = 0; i < a.length(); ++i){
        int k = a[i] - 'a';
        aa[k] = 1;
    }
    for (int i = 0; i < a.length(); ++i){
        int k = b[i] - 'a';
        ab[k] = 1;
    }
    if (aa == ab) cout << "TRUE";
    else cout << "FALSE";
    cout << endl;
}