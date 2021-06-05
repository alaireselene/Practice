#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    if (s[0] == '(' && s[s.length() - 1] == ')'){
        array <int, 2> a {0};
        for (int i = 0; i < s.length(); ++i){
            if (s[i] == '(') ++a[0];
            else ++a[1];
        }
        if (a[0] == a[1]) cout << "TRUE" << endl;
        else cout << "FALSE" << endl;
    }
    else cout << "FALSE" << endl;
    return 0;
}