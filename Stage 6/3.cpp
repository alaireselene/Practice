#include <bits/stdc++.h>
using namespace std;

int main(){
    int size = 6;
    vector <int> arr {5, 3, 9, 4, 8, 1};
    for (int i = 0; i < size; ++i){
        if (arr[i] % 3 == 0) arr.erase(arr.begin() + i);
        else continue;
    }
    for (int i = 0; i < arr.size(); ++i)
    {
        cout << arr[i] << '\t';
    }
    return 0;
}