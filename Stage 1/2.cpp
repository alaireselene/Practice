#include <bits/stdc++.h>
using namespace std;

bool checkPrime(int a){
    if (a == 1) return false;
    int count = 0;
    for (int i = 2; i <= sqrt(a); ++i){
        if (a % i == 0) ++count;
    }
    return count == 0;
}

bool check2(int a){
    if (checkPrime(a)){
        while(a / 10 != 0){
            a/= 10;
            if (checkPrime(a)) a /= 10;
            else return false;
        }
        return true;
    }else return false;
}
int main(){
    int n;
    cin >> n;
    int count = 0;
    for (long long int i = pow(10, n - 1); i < pow (10, n); ++i){
        if (check2(i)){
            ++count;
            cout << i << ' ';
        }
    }
    cout << endl << count << endl;
}