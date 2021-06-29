#include <bits/stdc++.h>
using namespace std;

int binsrc(int *arr, const int &num){
    int l = 0, r = sizeof(arr)/ sizeof(arr[0]) - 1;
    int mid = l + (l - r) / 2;
    if (num > arr[r] || num < arr[l]) return -1;
    while (arr[mid] != num)
    {
        if (arr[mid] < num) l = mid + 1;
        else r = mid - 1;
        mid = l + (l - r) / 2;
    }
    return mid;
}

int main(){
    int a[5] = { 2, 3, 4, 10, 40 };
    int num = 10;
    cout << binsrc(a, num);
    return 0;
}