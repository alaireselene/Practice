#include <iostream>
using namespace std;

int gcd (int a, int b){
    if (a % b == 0) return b;
    return gcd(b, a % b);
}
bool check (const int &a){
    int b = a % 10 * 10 +  a / 10;
    return gcd (a, b) == 1;
}
int main(){
    for (int i = 10; i < 100; ++i){
        if (check(i)) cout << i << " ";
    }
    cout << endl;
}