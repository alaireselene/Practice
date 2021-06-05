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

int reverseNum(int a){
    int temp = 0;
    while (a / 10 != 0){
        temp = temp * 10 + a % 10;
        a /= 10;
    }
    return temp * 10 + a;
}

int main(){
    int a, b;
    cin >> a >> b;
    for (int i = a; i <= b; ++i){
        if(checkPrime(reverseNum(i)) == true) cout << i << endl;
    }
}