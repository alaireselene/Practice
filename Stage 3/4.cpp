#include <bits/stdc++.h>
using namespace std;

void EthSieve(const int &n, vector <bool> &v){
    vector <bool> prime (n + 1, true);
    prime[0] = prime[1] = false;
    for (int p = 2; p <= sqrt(n); ++p){
        for (int i = pow(p, 2); i <= n; i += p){
            prime[i] = false;
        }
    }
    v = prime;
}

int main(){
    int n, k, count = 0;
    cin >> n >> k;
    int arr[n];
    for (int &item: arr){
        cin >> item;
    }
    vector <bool> a;
    EthSieve(k, a);
    for (int i = 0; i < n; ++i){
        if (a[arr[i]] && arr[i] < k) ++count;
    }
    cout << count << endl;
    return 0;
}