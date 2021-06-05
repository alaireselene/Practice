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

int main(){
    int n, count0 = 0, sum = 0;
    cin >> n;
    if (n == 1) cout << n;
    for (int i = 2; i < n; ++i){
        int count = 0, temp = n;
        while (temp % i == 0) {
            ++count;
            temp /= i;
        }
        if(count){
            cout << i;
            if (count > 1) cout << " ^ " << count;
            if (temp > i) cout << " * ";
        }
        
    }
    for (int i = 2; i < n; ++i){
        if(n % i == 0) {
            ++count0;
            sum = sum + i;
        }
    }
    cout << endl << count0 << endl << sum;
}