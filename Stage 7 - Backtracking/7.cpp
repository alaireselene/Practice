#include <bits/stdc++.h>
using namespace std;

int k, n;
array <string, 11> si;
array <int, 11> id = {0};

void out(){
    for (int i = 1; i <= k; ++i){
        cout << si[id[i]] << ' ';
    }
    cout << '\n';
}

void bt(int pos){
    for (int i = id[pos - 1] + 1; i <= n - k + pos; ++i){
        id[pos] = i;
        if (pos == k) out();
        else bt(pos + 1);
    }
}

int main(){
    cin >> k >> n;
    si[0] = "";
    for (int i = 1; i <= n; ++i){
        cin >> si[i];
    }
    bt(1);
    return 0;
}
