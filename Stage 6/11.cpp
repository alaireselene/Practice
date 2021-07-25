#include <bits/stdc++.h>
using namespace std;

vector <float> in;

bool is_mirror(int l, int r){
    for (; l <= r; ++l, --r){
        if(in[l] != in[r]) {
            break;
            return false;
        }
    }
    return true;
}

int main(){
    int n, x;
    cin >> n;
    for (int i = 0; i < n; ++i){
        cin >> x;
        in.push_back(x);
    }
    int len = 0, comp = 0, pos;
    for (int i = 0; i < in.size() - 1; ++i){
        pos = i + 1;
        for ( ; pos < in.size() && !is_mirror(i, pos); ++pos) ++len;
        ++pos;
        if (len > comp) comp = len;
        len = 0;
    }
    cout << pos << ' ' << comp << '\n';
}
