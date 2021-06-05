#include <bits/stdc++.h>
using namespace std;

bool isBalanced(int a){
    string b = to_string(a);
    int count = 0;
    for (int i = 0; i < b.length() / 2; ++i){
        if (b[i] != b[b.length() - 1 - i]) ++count;
    }
    return count == 0;
}

int main(){
    for (int i = 101; i < 47000; ++i){
        if (isBalanced(i) && isBalanced(i * i)) cout << i << ' ' << i * i << endl;
    }
    return 0;
}