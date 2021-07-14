#include <bits/stdc++.h>
using namespace std;

vector <long long> a;
int k;
long long l, r; // for Declare function.

void inp(){
    cin >> k;
    int num;
    for (int i = 0; i < k; ++i){
        cin >> num;
        a.push_back(num);
    }
    sort(a.begin(), a.end());
    for (auto &item:a) cout << item << ' ';
    cout << '\n';
}

void declare(const long long &a, const long long &b){
    l = int (double (a / 10.0) + 0.9) * 10;
    r = int (double (b / 10.0)) * 10;
    if (r == b) r -= 10;
    if (l == a) l += 10;
    while (l <= r){
        cout << l << ' ';
        l += 10;
    }
}

int main(){
    inp();
    int pos = 0;
    for (int i = 0; i < k; ++i){
        declare(a[i], a[i + 1]);
    }
    cout << '\n';
    return 0; 
}