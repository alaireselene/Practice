#include <bits/stdc++.h>
using namespace std;

vector <int> ch;
int n, cnt = 0; // n - so phan tu, cnt - so lan bien doi;

void inp(){
    cin >> n;
    char tmp; // Input X _ D _ V;
    for (int i = 0; i < n; ++i){
        cin >> tmp;
        if (tmp == 'X') ch.push_back(1);
        if (tmp == 'D') ch.push_back(2);
        if (tmp == 'V') ch.push_back(3);
    }
}

void out(){
    for (int &item: ch){
        if (item == 1) cout << 'X' << ' ';
        if (item == 2) cout << 'D' << ' ';
        if (item == 3) cout << 'V' << ' ';
    }
    cout << '\n';
}

void shell_sort(){
    for (int gap = n / 2; n > 0; gap /= 2){
        // Tao bien khoang cach - gap.
        for (int i = gap; i < n; ++i){
            // Dat bien 'linh canh' - i.
            // Sau do lay gia tri cua linh canh - tmp.
            // Linh canh se la phan tu nho nhat.
            // Cac buoc o duoi cung la 1 cach swap tung phan tu. Chu y!
            int tmp = ch[i];
            int j;
            for (j = i; j - gap >= 0 && ch[j] < ch[j - gap]; j -= gap){
                ch[j] = ch[j - gap];
            }
            ch[j] = tmp;
        }
        out(); ++cnt;
        int i = 0;
        while (ch[i] <= ch[i + 1]) ++i;
        if (i >= n - 1) return;
    }
}

int main(){
    inp();
    shell_sort();
    cout << cnt << '\n';
    return 0;
}