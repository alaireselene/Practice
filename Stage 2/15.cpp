#include <bits/stdc++.h>
using namespace std;

int main(){
    int m, n, ans;
    cin >> m >> n;
    ans = m + n;
    string s = to_string(ans);
    array <int, 10> a {0};
    for (int i = 0; i < s.length(); ++i){
        int k = s[i] - '0';
        ++a[k];
    }
    for (int i = 0; i < 10; ++i){
        if (a[i] != 0) cout << "SO LAN XUAT HIEN CHU SO " << i << ": " << a[i] << endl;
    }
    return 0;
}