#include <bits/stdc++.h>
using namespace std;

int main(){
    int n = rand() % (40 + 1);
    int arr[n];
    int sum = 0;
    for (int i = 0; i < n; ++i){
        arr[i] = rand() % (60 + 1);
        cout << arr[i] << '\t';
    }
    cout << endl;
    for (int i = 0; i < n; ++i){
        cout << sum << '\t';
        sum += arr[i];
    }
    return 0;
}