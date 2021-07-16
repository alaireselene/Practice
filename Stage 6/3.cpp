#include <bits/stdc++.h>
using namespace std;

int main(){
    int size = 6;
    vector <long long> arr {6, 3, 5, 7, 18, 8};
    vector <long long> store;
    for (int i = 0; i < size; ++i){
        if(arr[i] % 3 == 0 && arr[i] != 0) continue;
        store.push_back(arr[i]);
    }
    for (auto &item:store) cout << item << ' ';
    cout << '\n';
    return 0;
}