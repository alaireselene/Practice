#include <bits/stdc++.h>
using namespace std;

char CeasarEncrypt(char a, int b){
    if (a >= 'a' && a <= 'z'){
        char c = (a - 'a' + b) % 26 + 'a';
        return c;
    }
    if (a >= 'A' && a <= 'Z'){
        char c = (a - 'A' + b) % 26 + 'A';
        return c;
    }
}
int main(){
    string a, b; int c;
    cin >> c; cin.ignore();
    getline(cin, a);
    getline(cin, b);
    for (int i = 0; i < a.length(); ++i){
        cout << CeasarEncrypt(a[i], c);
    }
    cout << endl;
    for (int i = 0; i < b.length(); ++i){
        cout << CeasarEncrypt(b[i], c);
    }
    cout << endl;
    return 0;
}