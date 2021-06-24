#include <bits/stdc++.h>
// Done.
using namespace std;

int main(){
    string s;
    getline(cin, s);
    cin.ignore();
    array<int, 127> a = {0};
    for (int i = 0; i < s.length(); ++i){
        if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))++a[s[i]];
    }
    for (int i = 0; i < 256; ++i){
        if (a[i] != 0) cout << (char) i << ": " << a[i] << "\t";
    }
    return 0;
}