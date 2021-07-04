#include <bits/stdc++.h>
using namespace std;

int main(){
    int size = rand() % (20 + 1);
    vector <int> arr;
    for (int i = 0; i < size; ++i){
        arr.push_back(rand() % (40 + 1));
        cout << arr[i] << '\t';
    }
    cout << '\n';
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