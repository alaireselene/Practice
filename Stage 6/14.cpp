#include <bits/stdc++.h>
using namespace std;

vector <long long> fibo;
long long n;

void gen(){
    cin >> n;
    fibo.push_back(1);
    fibo.push_back(1);
    for(int i = 2; fibo.back() < n; ++i){
        fibo.push_back(fibo[i - 1] + fibo[i - 2]);
    }
    while (n > 0){
        int i = lower_bound(a.begin(), a.end(), n) - a.begin();
        if (fibo[i] > n) --i;
        cout << fibo[i] << " + ";
        n -= fibo[i];
    }
    cout << '\n';
}

int main(){
    gen();
return 0;
}
