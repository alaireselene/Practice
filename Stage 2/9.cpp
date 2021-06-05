#include <bits/stdc++.h>
using namespace std;

int gcd_hm(int a, int b){
    if (a == 0) return b;
    return(gcd_hm(b % a, a));
}
void sum_hm(int a[4], int ans[2]){
    int b = a[0] * a[3] + a[1] * a[2];
    int c = a[1] * a[3];
    int d = gcd_hm(b, c);
    ans[0] = b / d;
    ans[1] = c / d;
}

void sub_hm(int a[4], int ans[2]){
    int b = a[0] * a[3] - a[1] * a[2];
    int c = a[1] * a[3];
    int d = gcd_hm(b, c);
    ans[0] = b / d;
    ans[1] = c / d;
}

void mul_hm(int a[4], int ans[2]){
    int b = a[0] * a[2];
    int c = a[1] * a[3];
    int d = gcd_hm(b, c);
    ans[0] = b / d;
    ans[1] = c / d;
}

void div_hm(int a[4], int ans[2]){
    int b = a[0] * a[3];
    int c = a[1] * a[2];
    int d = gcd_hm(b, c);
    ans[0] = b / d;
    ans[1] = c / d;
}
int main(){
    int a[4];
    int b[2];
    for (int i = 0; i < 4; ++i){
        cin >> a[i];
    }
    sum_hm(a, b);
    cout << b[0] << ' ' << b[1] << endl;
    sub_hm(a, b);
    cout << b[0] << ' ' << b[1] << endl; 
    mul_hm(a, b);
    cout << b[0] << ' ' << b[1] << endl;
    div_hm(a, b);
    cout << b[0] << ' ' << b[1] << endl;
}