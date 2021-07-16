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
    for(int i = fibo.size() - 1; i >= 0; --i){
        if (n - fibo[i] > 0){
            cout << fibo[i];
            n -= fibo[i];
            cout << " + ";
        }
        else continue;
    }
}

int main(){
    gen();
return 0;
}
