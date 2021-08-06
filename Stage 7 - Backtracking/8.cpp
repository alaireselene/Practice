#include <bits/stdc++.h>
using namespace std;

string s, st;
int slen;
array <bool, 10> id = {0};

int fac(int n){
    return (n == 1 || n == 0) ? 1 : n * fac(n - 1);
}

void bt(int k){
    for (int i = 0; i < slen; ++i){
        if (!id[i]){
            st.push_back(s[i]);
            id[i] = 1;
            if (k == slen - 1) cout << st << '\n';
            else bt(k + 1);
            st.pop_back();
            id[i] = 0;
        }

    }
}

int main(){
    cin >> s;
    slen = s.length();
    cout << "Co " << fac(slen) << " hoan vi khac nhau cua ";
    cout << s << '\n';
    bt(0);
    return 0;
}
