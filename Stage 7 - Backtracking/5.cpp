#include <bits/stdc++.h>
using namespace std;

string s;
size_t l;
vector <int> fac;
map <char, int> id;

int main(){
    cin >> s;
    l = s.size();
    fac.push_back(1);
    for (size_t i = 1; i <= l; ++i){
        fac.push_back(fac[i - 1] * i);
    }
    for (size_t i = 0; i < l; ++i){
        id[s[i]] ++;
    }
    for (auto &item:id) fac.back() /= fac[item.second];
    cout << fac.back() << '\n';
    return 0;
}
