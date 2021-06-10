#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;

int main(){
    int in, a;
    cin >> in;
    a = abs(in);
    string temp, ans;
    if (a == 0) temp = '0';
    while (a!= 0){
        if (a % 2 == 0) temp += '0';
        else temp += '1';
        a /= 2;
    }
    for (int i = temp.length() - 1; i >= 0; --i){
        ans += temp[i];
    }
    if (in >= 0) cout << ans;
    else {
        int i = stoi(ans) + 10000000;
        cout << i;
    }
    return 0;
}