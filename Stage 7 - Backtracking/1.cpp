#include <bits/stdc++.h>
using namespace std;

bool isSame(const string &a){
    int s = a.size();
    for (int i = s/2; i >= 1; --i){
        for (int k = 0; i < s; ++i){
            if (i + k >= s) break;
            if (a.substr(k, i) == a.substr(k + i, i)){
                break;
                return true;
            }
        }
    }
    return false;
}

int main(){
    string s = "ABBABA";
    cout << isSame(s);
    return 0;
} 
