#include <bits/stdc++.h>
using namespace std;

int main(){
    fstream FIN, FOUT;
    FIN.open("Labai.INP", stdin);
    FOUT.open("Labai.OUT", stdout);
    int n;
    cin >> n;
    vector <long long> in(n);
    for (int i = 0; i < n; ++i){
        cin >> in[i];
    }
    vector <long long> store;
    long long temp = a[i];
    store.push_back(a[i]);
    for (int i = 1; i < n; ++i){
        if (a[i] != temp){
            store.push_back(a[i]);
            temp = a[i];
        }
        else continue;
    }
    cout << store.size() << '\n';
    for (auto &item:store) cout << item << ' ';
    cout << '\n';
    return 0;
}
