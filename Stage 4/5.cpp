#include <bits/stdc++.h>
using namespace std;

char dgitset[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};

/* Idea: Tach xau goc ra thanh tung phan chua 4 ki tu (0, 1).
Su dung ham b2_10 de chuyen doi lan luot cac phan thanh he 16.
Sau do dung ham progress de thuc hien ghep cac phan vao voi 
nhau. */
char b2_10(const string &a){    // Chuyen doi 4 ki tu 0-1 thanh he 16
    int temp = 0;
    for (int i = a.length() - 1; i >= 0; --i){
        temp += (a[i] - '0') * pow(2, a.length() - i - 1);
        /* Ban dau viet la 4, sau sua thanh a.length() vi
        cac xau le truyen vao co do dai 3/2/1. */
    }
    return dgitset[temp];
}

string progress(const string &a){
    int VAL = a.length() % 4;
    string pre = a.substr(0, VAL), ans = "";
    ans = b2_10(pre) + ans;
    for (int i = VAL; i < a.length(); i += 4)
    {
        pre = a.substr(i, 4);
        ans = ans + b2_10(pre);
        /* Ghi nho: neu viet ans = b2_10(pre) + ans
        thi ans se bi dao nguoc lmao bruh */
    }
    return ans;
}
int main(){
    string a;
    cin >> a;
    cout << progress(a);
    return 0;
}