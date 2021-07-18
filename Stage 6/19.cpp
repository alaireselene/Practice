#include <bits/stdc++.h>
using namespace std;

void swap(long long &a, long long &b){
    long long c = a;
    a = b;
    b = c;
}

int main(){
    fstream FIN, FOUT;
    FIN.open("GIFT.INP", ios::in);
    FOUT.open("GIFT.OUT", ios::out);
    int n;
    vector <long long> a, b, c, ans = 0;
    long long a_in, b_in;
    FIN >> n;

    while (!FIN.eof()){
        FIN >> a_in >> b_in;
        a.push_back(a_in);
        b.push_back(b_in);
        c.push_back(a_in - b_in);
    }
    for (int i = 0; i < n; ++i){
        for (int k = 0; k < n - 1; ++k){
            if (c[k] > c[k + 1]){
                swap(c[k], c[k + 1]);
                swap(a[k], a[k + 1]);
                swap(b[k], b[k + 1]);
            }
        }
    }
    for (int i = 0; i < n / 2; ++i){
        ans += (a[i] + b[i]);
    }
    FOUT << ans;
    FOUT.close();
    FIN.close();
    return 0;
}
