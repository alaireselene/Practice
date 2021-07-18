#include <bits/stdc++.h>
using namespace std;

vector <string> s;
int n;

bool isTrue(const string &a, const string &b){
    int pos_1, pos_2;
    for (int i = a.size() - 1; i >= 0; --i){
        if (a[i] == ' ') {
            pos_1 = i + i;
            break;
        }
    }
    for (int i = b.size() - 1; i >= 0; --i){
        if (b[i] == ' ') {
            pos_2 = i + 1;
            break;
        }
    }
    return a.substr(pos_1) < b.substr(pos_2);
}

int main(){
    freopen("Input.inp", 'r', stdin);
    freopen("Output.out", 'w', stdout);
    cin >> n;
    string ts;
    for (int i = 0; i < n; ++i){
        getline(cin, ts);
        s.push_back(ts);
    }
    sort(s.begin(), s.end(), isTrue);
    for (auto &item:s) cout << item << '\n';
    return 0;
}
