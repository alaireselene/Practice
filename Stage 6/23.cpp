#include <bits/stdc++.h>
using namespace std;

vector <string> s;
int n;

bool isTrue(const string &a, const string &b){
    int pos_1, pos_2;
    for (int i = a.size() - 1; i >= 0; --i){
        if (a[i] == ' ') {
            pos_1 = i + 1;
            break;
        }
    }
    for (int i = b.size() - 1; i >= 0; --i){
        if (b[i] == ' ') {
            pos_2 = i + 1;
            break;
        }
    }
    return a.substr(pos_1, a.size() - 1 - pos_1) < b.substr(pos_2, a.size() - 1 - pos_2);
}

int main(){
    fstream FIN, FOUT;
    FIN.open("Input.inp", ios::in);
    FOUT.open("Output.out", ios::out);
    FIN >> n;
    string ts;
    for (int i = 0; i < n; ++i){
        getline(FIN, ts);
        s.push_back(ts);
    }
    sort(s.begin(), s.end(), isTrue);
    for (auto &item:s) cout << item << '\n';
    return 0;
}
