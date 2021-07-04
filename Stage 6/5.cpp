#include <bits/stdc++.h>
using namespace std;

int main(){
    vector <int> arr {5, 3, 9, 4, 8, 1};
    int pos = 3;
    while (arr.size() != 1){
        int size = arr.size();
        cout << arr[pos] << '\t';
        arr.erase(arr.begin() + pos);
        pos = (pos + 4) % size;
    }
    return 0;
}