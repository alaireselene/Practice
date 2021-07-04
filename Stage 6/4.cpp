#include <bits/stdc++.h>
using namespace std;

int main(){
    vector <int> arr {5, 3, 2, 8, 4};
    int size = arr.size();
    for (int i = 0; i < size; ++i){
        if (arr[i] % 3 == 0){
            if (arr[i] == 0) continue;
            arr.erase(arr.begin() + i);
            for (int k = 0; k < 3; ++k){
                arr.insert(arr.begin() + i, 0);
            }
        }
    }
    for (int i = 0; i < arr.size(); ++i){
        cout << arr[i] << '\t';
    }
    cout << '\n';
    return 0;
}