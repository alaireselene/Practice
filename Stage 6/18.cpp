#include <bits/stdc++.h>
using namespace std;

vector<string> s;

bool isLarger(const string &a, const string &b){
    return a + b > b + a;
}

void inp(){
    fstream FIN;
    FIN.open("NUMCON.INP", ios::in);
    
    while (!FIN.eof()){
        string n;
        FIN >> n;
        s.push_back(n);
    }
    FIN.close();
}

int main(){
    fstream FOUT;
    sort(s.begin(), s.end(), isLarger);
    for (auto &item:s) FOUT << item;
    cout << '\n';
    FOUT.close();
    return 0;
}
