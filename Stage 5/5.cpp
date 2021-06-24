#include <bits/stdc++.h>
using namespace std;

int main(){
    string a;
    getline(cin, a);
    cin.ignore();
    int b;
    cin >> b;
    cout << a.substr(b, a.length() - b) << a.substr(0, b);
    return 0;
}