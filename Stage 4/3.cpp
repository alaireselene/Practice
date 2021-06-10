#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;

int base2to10 (int a){
    if (a == 0) return 0;
    int temp = 0;
    for (int i = 0; a != 0; ++i){
        temp += (a % 10) * pow (2, i);
        a /= 10;
    }
    return temp;
}

int base16to10 (string a){
    if (a == "0") return 0;
    int temp = 0;
    for (int i = 0; a.length() != 0; ++i){
        char ch = a[a.length() - 1];
        if ('0' <= ch && ch <= '9'){
            temp += (ch - '0') * pow(16, i);
        }
        if ('A' <= ch && ch <= 'F'){
            temp += (ch - 'A' + 10) * pow(16, i);
        }
        a.erase(a.length() - 1, 1);
    }
    return temp;
}

int base10to2(int a){
    string temp, ans1;
    if (a == 0) temp = '0';
    while (a!= 0){
        if (a % 2 == 0) temp += '0';
        else temp += '1';
        a /= 2;
    }
    for (int i = temp.length() - 1; i >= 0; --i){
        ans1 += temp[i];
    }
    return stoi(ans1);
}

string base10to16(int a){
    string temp, ans;
    const unsigned char ch[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};
    if (a == 0) return "0";
    while (a != 0){
        temp += ch[a % 16];
        a /= 16;
    }
    for (int i = temp.length() - 1; i >= 0; --i){
        ans += temp[i];
    }
    return ans;
}
int main(){
    int a, b, c, b1;
    string b2;
    cin >> a;

    if (a == 2){
        cin >> b >> c;
        b1 = base2to10(b);
    }

    if (a == 16){
        cin >> b2 >> c;
        b1 = base16to10(b2);
    }

    if (c == 10){
        if (a == 16) cout << b1 << "[cs" << a << "]=" << b1 << "[cs" << c << "]";
        else cout << b << "[cs" << a << "]=" << b1 << "[cs" << c << "]";
    }

    if (c == 2){
        if (a == 16) cout << b1 << "[cs" << a << "]=" << base10to2(b1) << "[cs" << c << "]";
        else cout << b << "[cs" << a << "]=" << b << "[cs" << c << "]";
    }

    if (c == 16){
        if (a == 16) cout << b1 << "[cs" << a << "]=" << b2 << "[cs" << c << "]";
        else cout << b << "[cs" << a << "]=" << base10to16(b1) << "[cs" << c << "]";
    }
    return 0;
}