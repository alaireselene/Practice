#include <bits/stdc++.h>
using namespace std;

int main(){
    int size_a = 6;
    vector <int> a {5, 3, 9, 4, 8, 1};
    int size_b = 5;
    vector <int> b {12, 56, 9, 3, 7};
    vector <int> c;
    for (int i = 0; i < size_a; ++i){
        c.push_back(a[i]);
    }
    for (int i = 0; i < size_b; ++i){
        c.push_back(b[i]);
    }
    sort(c.begin(), c.end());
    for (int i = 0; i < c.size(); ++i){
        cout << c[i] << '\t';
    }
    return 0;
}