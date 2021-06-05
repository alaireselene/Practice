#include <bits/stdc++.h>
using namespace std;

// Great Common Divisor
int GCD(int a, int b){
    if (b % a == 0) return a;
    return GCD(b , a % b);
}
// Least Common Multiple
int LCM (int a, int b){
    return a * b / GCD(a, b);
}

int main(){
    cout << GCD(15,12) << " " << LCM(15,12) <<endl;
    return 0;
}