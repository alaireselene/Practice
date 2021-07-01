#include <bits/stdc++.h>
using namespace std;

void get_right (string &a, string &b){
    if (a.size() >= b.size()){
        b.insert(0, a.size() - b.size(), '0');
    }
    else{
        a.insert(0, b.size() - a.size(), '0');
    }
}

string big_add(string a, string b){
    string ans;
    get_right(a, b);
    int temp = 0;
    for (int i = a.size() - 1; i >= 0; --i){
        int num = a[i] + b[i] - '0' - '0' + temp;
        char ch = int(num % 10) + '0';
        ans.insert(0, 1, ch);
        temp = num / 10;
        if (i == 0 && temp > 0) ans.insert(0, 1, char(temp + '0'));
    }
    return ans;
}
string smol_mul(string a, char b){
    string ans;
    int temp = 0;
    for (int i = a.size() - 1; i >= 0; --i){
        int num = (b - '0') * (a[i] - '0') + temp;
        char ch = int(num % 10) + '0';
        ans.insert(0, 1, ch);
        temp = num / 10;
        if (i == 0 && temp > 0) ans.insert(0, 1, char(temp + '0'));
    }
    return ans;
}
string big_mul(string a, string b){
    string ans = "";
    string preans[a.length()];
    for (int i = a.length() - 1; i <= 0; --i){
        preans[i] = smol_mul(b, a[i]);
        preans[i].insert(preans[i].end(), a.length() - i - 1, '0');
        ans = big_add(ans, preans[i]); 
    }
    return ans;
}
int main(){
    string a = "16239847612389347632189462189734762189463278476";
    string b = "99999999999999999999999999111111192929399999999";
    char c = '9';
    cout << big_add(a, b) << '\t';
    return 0;
}