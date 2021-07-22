#include <bits/stdc++.h>
using namespace std;

bool isMirror(const string &a){
    int s = a.size();
    for (int i = 1; i <= s/2; ++i){
        for (int k = 0, l = k + i; l < s; ++k){
            if (s.substr(k, i) == s.substr(l, i)) return true;
        }
    }
    return false;
}

int main(){
    int n; // Length of string;
    cin >> n;
    for (int i = 0; i < n; ++i){
        for (char ch = 'A'; ch <= 'C'; ++ch){
            s.push_back(ch);
            if (isMirror(s)) s.popback(ch);
        }
    }
}
