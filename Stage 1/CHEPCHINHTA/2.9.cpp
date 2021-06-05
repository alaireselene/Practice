#include <bits/stdc++.h>
using namespace std;

int ucln(int a, int b){
    if(b == 0) return a;
    return ucln(b, a % b);
}

int bcnn(int a, int b){
    return a * b / ucln(a, b);
}

int ucln_ARRAY(int a[]){
    vector <int> b;
    sort(a, a + sizeof(a) / sizeof(a[0]));
    for (int i = 1; i < sizeof(a) / sizeof(a[0]); ++i){
        b.push_back(ucln(a[0], a[i]));
    }
    int d = ucln(b[0], b[1]);
    for (int i = 2; i < sizeof(a) / sizeof(a[0]); ++i){
        d = ucln(d, b[i]);
    }
    return d;
}

int main(){
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; ++i){
        cin >> a[i];
    }
    int d = bcnn(a[0], a[1]);
    for (int i = 2; i < sizeof(a) / sizeof(a[0]); ++i){
        d = bcnn(d, a[i]);
    }
    cout << ucln_ARRAY(a) << ' ' << d << endl;
    return 0;
}