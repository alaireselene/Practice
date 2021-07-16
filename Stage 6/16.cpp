#include <bits/stdc++.h>
using namespace std;

vector <long long> a;
vector <long long> x;
vector <long long> store;
vector <int> pos;
int n;

void in(){
    int inp;
    cin >> n;
    for (int i = 0; i < n; ++i){
        cin >> inp;
        a.push_back(inp);
    }
    for (int i = 0; i < n; ++i){
        cin >> inp;
        x.push_back(inp);
    }
    for (int i = 0; i < n; ++i){
        store.push_back(a[i] - x[i]);
    }
}

void cal(){
     long long dp = 0;
     for (int i = store.size() - 1; i >= 0; --i){
         dp += store[i];
         if (dp >= 0){
             if (store[i] < 0) pos.push_back(-1);
             else pos.push_back(i);
         }
         else pos.push_back(-1);
     }
     for (int i = pos.size() - 1; i >= 0; --i){
         if (pos[i] != -1) cout << pos[i] + 1  << ' ';
     }
     cout << '\n';
}
int main(){
    in();
    cal();
}
