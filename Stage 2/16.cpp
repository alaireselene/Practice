#include <bits/stdc++.h>
using namespace std;

int main(){
    string can[10] = {"Giap", "At", "Binh", "Dinh", "Mau", "Ki", "Canh", "Tan", "Nham", "Quy"};
    string chi[12] = {"Ti", "Suu", "Dan", "Mao", "Thin", "Ty", "Ngo", "Mui", "Than", "Dau", "Tuat", "Hoi"};
    int a;
    cin >> a;
    cout << can[(a + 6) % 10] << ' ' << chi[(a + 8) % 12] << endl;
    return 0;
}