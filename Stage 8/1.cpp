#include <bits/stdc++.h>
using namespace std;

array <int, 21> st, in, bc, tsum = {0}, check = {0};
int n, fin, c = INT_MAX;

/* in - input array
 * st - store the best config
 * n - number of input
 * fin - value to compare
 * c - number of item
 */

void out(int k){
    cout << k << "\n";
    for (int i = 1; i <= k; ++i){
        cout << bc[i] << ' ';
    }
    cout << '\n';
}

void bt(int k){
    for (int i = 1; i <= n; ++i){
       if (!check[i]){
           st[k] = in[i];
           tsum[k] = tsum[k - 1] + in[i];
           check[i] = 1;
           if (tsum[k] > fin) continue;
           if (tsum[k] == fin && k < c){
               c = k;
               bc = st;
           }
           else bt(k + 1);
           check[i] = 0;
       }
    }
}

int main(){
    cin >> n >> fin;
    for (int i = 1; i <= n; ++i){
        cin >> in[i];
    }
    sort(in.begin() + 1, in.end(), greater<int>());
    bt(1);
    out(c);
    return 0;
}
