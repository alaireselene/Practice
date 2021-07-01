#include <bits/stdc++.h>
using namespace std;

string big_add(string a, string b){
    // Hàm cộng 2 số lớn.
    string ans;
    a.insert(0, b.size() - a.size(), '0');
    // San đều
    int temp = 0;
    // 5 + 9 = 14, temp sẽ bằng 1;
    // temp = 0 vì 2 chữ số trong cùng
    // cộng với nhau không cần nhớ.
    for (int i = a.size() - 1; i >= 0; --i){
        int num = a[i] + b[i] - '0' - '0' + temp;
        // Giá trị đại số của char n là n - '0'.
        // Áp dụng nguyên lý này, lấy tổng giá trị 2 phần
        // tử cùng vị trí của xâu.
        char ch = int(num % 10) + '0';
        // Giá trị kiểu char của số n là n + '0'.
        // Chỉ lấy phần hàng đơn vị.
        ans.insert(0, 1, ch);
        // Chèn vào xâu
        temp = num / 10;
        // Lấy phần nhớ
        if (i == 0 && temp > 0) ans.insert(0, 1, char(temp + '0'));
        // Nếu cộng đến hàng ngoài cùng phát sinh số lớn hơn 10, ví dụ:
        // 943 + 120 -> 1163. Phần if này để sau khi lấy phần đơn vị
        // thì chèn thêm 1 vào.
    }
    return ans;
}

int main(){
    int a;
    cin >> a;
    if (a == 0) cout << 0;
    string f, f1 = "1", f2 = "1";
    for (int i  = 3; i <= a; ++i){
        f = big_add(f1, f2);
        f1 = f2;
        f2 = f;
    }
    cout << f;
}