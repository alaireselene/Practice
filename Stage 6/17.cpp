#include <bits/stdc++.h>
using namespace std;

int main(){
    vector <long long> a;
    long long inp;
    int n, count = 1;
    cin >> n;
    for (int i = 0; i < n; ++i){
        cin >> inp;
        a.push_back(inp);
    }
    sort(a.begin(), a.end());
    long long compare = a[0];
    for (int i = 1; i < n; ++i){
        if (a[i] != compare) ++count;
        compare = a[i];
    }
    cout << count << '\n';
    return 0;
}
