#include <bits/stdc++.h>
using namespace std;

vector <long long> ftr;
// Generate factorial;
long long n;

void gen(){
    cin >> n;
    ftr.push_back(1);
    for (int i = 2; ftr.back() < n; ++i){
        ftr.push_back(ftr[i - 2] * i);
    }
    for (int i = ftr.size() - 1; i >= 0; --i){
        if (n / ftr[i] < 1) continue;
        else{
            long long t = n / ftr[i];
            cout << "D[" << i << "] = " t << " * " ftr[i] << " = " t * ftr[i] << '\n';
            n -= t * ftr[i];
        }
    }
}

int main(){
    gen();
}
