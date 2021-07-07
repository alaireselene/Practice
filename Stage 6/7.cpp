#include <bits/stdc++.h>
#define max 100
using namespace std;

int n, cnt;
char ch[max];

void inp(){
    cin >> n;
    for (int i = 0; i < n; ++i){
        int num = rand() % 3 + 1;
        if (num == 1) ch[i] = 'X';
        else if (num == 2) ch[i] = 'D';
        else ch[i] = 'V';
    }
}

void out(){
    for (int i = 0; i < n; ++i){
        cout << ch[i] << '\t';
    }
    cout << '\n';
}

void process(){
    int d = 0, c = n + 1, i = 1, j = n;
    // d, c - 2 bien dinh vi
    // i, j - 2 bien duyet mang
    cnt = 0;
    while (i < c){
        if (ch[i] == 'X'){
            while (ch[i] == 'X') ++i, ++d;
        }
        else if (ch[i] == 'V') {
            while (ch[j] == 'V') --c, --j;
            ch[i] = ch[j];
            ch[j] = 'V';
            --c, --j, ++cnt;
            out();
        }
        else{
            while (ch[c - 1] == 'V') --c;
            while (ch[j] == 'D') --j;
            if (j == i) return;
            if (ch[j] == 'V'){
                ch[j] = ch[i];
                ch[c - 1] = 'V';
                --c, ++cnt;
                out();
            }
            else{
                ch[j] = ch[i];
                ch[i] = 'X';
                ++d, ++cnt;
                out();
            }
        }
    }
    cout << '\n';
}
// Let it alone lmao.
int main(){
    inp();
    out();
    process();
    cout << "Time to convert: " << cnt;
    return 0;
}