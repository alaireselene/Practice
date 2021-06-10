#include <iostream>
#include <cstring>
using namespace std;

int main(){
    int a;
    cin >> a;
    string temp;
    if (a == 0) temp = '0';
    while (a!= 0){
        if (a % 2 == 0) temp += '0';
        else temp += '1';
        a /= 2;
    }
    for (int i = temp.length() - 1; i >= 0; --i){
        cout << temp[i];
    }
    cout << endl;
    return 0;
}