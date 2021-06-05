#include <bits/stdc++.h>
using namespace std;

bool check (const int &a){
    if (a == 1) return false;
    int count = 0;
    for (int i = 2; i <= sqrt(a); ++i){
        if (a % i == 0) ++count;
    }
    return count == 0;
}
int main(){
    int arr[3], n = 9;
    arr[1] = n;
    if (not check(arr[1])) {
        cout << "NO";
        return 0;
    }
    arr[0] = n - 2;
    arr[2] = n + 2;
    while (not check(arr[0])){
        arr[0] -= 2;
    }
    while (not check(arr[2])){
        arr[2] += 2;
    }
    if (arr[1] > (arr[0] + arr[2]) / 2) cout << "YES";
    else cout << "NO";
    return 0;
}