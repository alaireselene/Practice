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
    for (int i = n; i >= 2; --i){
        if (check2(i)){
            cout << i << endl;
            break;
        }
    }
    while (check2(n) == false) ++n;
    cout << n << endl;
}