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
string smol_mul(string a, char b){
    // Hàm nhân 1 số lớn hơn 1 chữ số
    // Với sô có 1 chữ số
    string ans;
    int temp = 0;
    for (int i = a.size() - 1; i >= 0; --i){
        int num = (b - '0') * (a[i] - '0') + temp;
        // Như trên.
        char ch = int(num % 10) + '0';
        ans.insert(0, 1, ch);
        temp = num / 10;
        if (i == 0 && temp > 0) ans.insert(0, 1, char(temp + '0'));
    }
    return ans;
}
string big_mul(string a, string b){
    // Ý tưởng: Nhân từng giá trị xâu a
    // với xâu b bằng hàm smol_mul.
    // sau đó, chèn thêm chữ số 0 vào
    // sau và cộng với string ans
    string ans;
    string preans[a.length()];
    for (int i = a.length() - 1; i >= 0; --i){
        preans[i] = smol_mul(b, a[i]);
        preans[i].insert(preans[i].end(), a.length() - i - 1, '0');
        ans = big_add(ans, preans[i]); 
    }
    return ans;
}
string giaithua(string a){ 
    string b = to_string(stoi(a) - 1);
    if (b == "0") return "1";
    else return big_mul(a, giaithua(b));
}
int main(){
    string a = "5";
    cout << giaithua(a) << '\t';
    return 0;
}