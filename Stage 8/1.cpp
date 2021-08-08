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
    cout << tc << '\n';
    for (int i = 1; i <= k; ++i){
        cout << st[i] << ' ';
    }
    cout << '\n';
}

void bt(int i){
    for (int k = 1; k <= n; ++i){
        if (!check[k]){
            st[i] = in[k];
            ++check[k];
            tsum[i] = tsum[i - 1] + in[k];
            if (tsum[i] == fin) out(i);
            else if (tsum[i] < fin) bt(i + 1);
            check[k] = 0;
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
    //for (int i = 1; i <= n; ++i){
    //    cout << in[i] << ' ';
    //}
    //cout << '\n';
}
