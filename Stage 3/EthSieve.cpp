#include <bits/stdc++.h>
using namespace std;

void EthSieve(const int &n){
    /* Tao 1 vector do dai n + 1 va co
    gia tri true de danh dau tat ca la 
    so nguyen */
    vector<bool> a(n + 1, true);
    a[0] = a[1] = false;
    /* Gia tri cua i chi chay den sqrt(n)
    vi chi co khoang sqrt(n) SNT trong 
    khoang tu i den n */
    for (int i = 2; i <= sqrt(n); ++i){
        if (a[i]) {
            /* i * (i - 1) da duoc danh dau 
            FALSE truoc so nen bat dau bang i ^ 2.
            Danh dau tat ca boi cua i la FALSE.
            */
            for (int k = pow(i, 2); k <= n; k += i){
                a[k] = false;
            }
        }
    }
    for (int i = 0; i < n +1; ++i)
        if (a[i]) cout << i << " ";
}

int main(){
    int n = 2000;
    EthSieve(n);
    return 0;
}