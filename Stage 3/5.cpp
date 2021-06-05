#include <bits/stdc++.h>
using namespace std;

unsigned long int sum(const unsigned long int &a){
    unsigned long int s = 0;
    // Cac uoc cua n khong lon hon n / 2 
    for (unsigned int i = 2; i <= a / 2; ++i){
        if (a % i == 0) s += i;
    }
    return s;
}

int main(){
    int n = 10000, d = 0;
    for (int i = 1; i < n; ++i){
        int temp = sum(i);
        if (sum(temp) == i){
            cout << i << "-" << temp << " ";
            ++d;
        }
    }
    cout << endl << d;
    return 0;
}