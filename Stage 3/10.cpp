#include <bits/stdc++.h>
using namespace std;

bool check (const int &a){
    if (a == 1) return false;
    int count = 0;
    for (int i = 2; i <= sqrt(a); ++i){
        if (a % i == 0) ++count;
    }
    return count == 0;
}
int main(){
    int m = 10;
    vector <int> fib;
    fib.push_back(0); fib.push_back(1);
    for (int i = 2; i < m + 1; ++i){
        fib.push_back(fib[i - 1] + fib[i - 2]);
    }
    for (int i = m; i >= 0; --i){
        if (fib[i] <= m && check(fib[i])){
            cout << fib[i];
            break;
        }
    }
    return 0;
}