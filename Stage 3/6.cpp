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
    vector <int> a(2);
    for (int &item: a) cin >> item;
    sort(a.begin(), a.end());
    vector <int> check1, check2;
    vector <bool> sieve;
    EthSieve(sqrt(a[1]), sieve);
    for (int i = 0; i <= sqrt(a[1]); ++i){
        if (sieve[i] && a[0] % i == 0) check1.push_back(i);
        if (sieve[i] && a[1] % i == 0) check2.push_back(i);
    }
    if (check1 == check2) cout << "YES";
    else cout << "NO";
}