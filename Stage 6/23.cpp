#include <bits/stdc++.h>
using namespace std;

vector <string> s;

bool isLarger(string &a, string &b){
    //
}
void inp(){
    int n;
    cin >> n;
    string in;
    for (int i = 0; i < n; ++i){
        cin.ignore();
        getline(cin, in);
        string temp;
        for (int i = in.length() -1; i > 0; --i){
            if (in[1] == ' ') break;
            temp = in[i] + temp;
        }
        s.push_back(temp);
    }
    for (auto &item:s) cout << item << '\n';
}

int main(){
    inp();
    return 0;
}
