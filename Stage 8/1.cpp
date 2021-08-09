#include <bits/stdc++.h>
using namespace std;

array <int, 21> st, in, tsum = {0}, check = {0};
int n, fin, c = 0, tc = 0;

/* in - input array
 * st - store the best config
 * n - number of input
 * fin - value to compare
 * c - number of item
 */

void out(int k){
    cout << "\t PASS! \n";
    for (int i = 1; i <= k; ++i){
        cout << st[i] << ' ';
    }
    cout << '\n';
}

void bt(int k){
    if (c + (fin - tsum[k - 1]) / in[k] >= c) return;
    for (int i = 1; i <= n; ++i){
       if (!check[i]){
           st[k] = in[i];
           tsum[k] = tsum[k - 1] + in[i];
           check[i] = 1;
           ++tc;
           if (tsum[k] > fin) break;
           if (tsum[k] == fin && tc < c){
               out(k);
               break;
           }
           if (tsum[k] < fin) bt(k + 1);
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
    return 0;
