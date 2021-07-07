#include <bits/stdc++.h>
// Let it alone lmao.
using namespace std;
void sort (int *arr, const int &size){
    for (int len = int(log10(size + 1) / log10(2)); len > 0; len = int(log10(len + 1) / log10(2))){
        // Can phai co 1 cong thuc de lay khoang cach giua 2 phan tu. O day thay
        // vi su dung 3 * n + 1,
        // su dung cong thuc de quy: 2 ^ n - 1 voi n ban dau la do dai mang arr.
        // Do phuc tap: O(n ^ (2 / 3));
    }
}
int main(){
    int k;
    cin >> k;
    char ch;
    int arr[k];
    for (int i = 0; i < k; ++i){
        cin >> ch;
        if (ch == 'X') arr[i] = 0;
        if (ch == 'D') arr[i] = 1;
        if (ch == 'V') arr[i] = 2;
    }

}