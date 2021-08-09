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
    for (int i = 1; i <= n; ++i){
       if (!check[i]){
           st[k] = in[i];
           tsum[k] = tsum[k - 1] + in[i];
           check[i] = 1;
           cout << "TEST: " << st[k] << '\t' << tsum[k] << '\t' << bool(check[i]) << '\n';
           if (tsum[k > fin]) break;
           if (tsum[k] == fin){
               out(k);
               break;
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
    return 0;
}
