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
    for (auto &item:ftr) cout << item << ' ';
    cout << '\n';
}
int main(){
    gen();
}
