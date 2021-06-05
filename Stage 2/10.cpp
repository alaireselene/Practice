#include <bits/stdc++.h>
using namespace std;

int main(){
    int a;
    float check1;
    cin >> a;
    check1 = (-1 + sqrt(1 + 8 * a)) / 2;
    if ((int)check1 == check1) cout << "YES";
    else cout << "NO";
    cout << endl;
    return 0;
}