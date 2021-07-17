#include <bits/stdc++.h>
using namespace std;

vector <long long> x;
vector <long long> a;
int n;

void in(){
    int inp;
    cin >> n;
    for (int i = 0; i < n; ++i){
        cin >> inp;
        x.push_back(inp);
    }
    for (int i = 0; i < n; ++i){
        cin >> inp;
        a.push_back(inp);
    }
}

int cal(int pos){
    long long k = x[pos];
    for (int i = pos; i < n; ++i){
        k -= a[i];
        if (k < 0) return -1;
        if (i != n -1) k += x[i + 1];
    }
    return pos + 1;
}
int main(){
    in();
    for (int i = 0; i < n; ++i){
        if (cal(i) != -1) cout << cal(i) << '\n';
    }
    return 0;
}
