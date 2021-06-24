#include <bits/stdc++.h>
// Done
using namespace std;

int main(){
    string s;
    getline(cin, s);
    cin.ignore();
    for (int i = 0; i < ceil(s.length() / 2); ++i){
        if (s[i] != s[s.length() - i - 1]) {
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
    return 0;
}