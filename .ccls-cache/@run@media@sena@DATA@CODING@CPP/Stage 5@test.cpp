#include <bits/stdc++.h>
using namespace std;

bool check(int a){
    while (a > 0){
        int t = a % 10;
        if (t == 0) return false;
        if (a % t == 0) a /= 10;
        else return false;
    }
    return true;
}
int main(){
    int le = 23, rt = 45;
    vector <bool> cv;
    for (int i = le; i <= rt; ++i){
        cout << check(i) << " ";
    }
    cout << "\n";
    return 0;
}
