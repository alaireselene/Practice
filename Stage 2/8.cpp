#include <bits/stdc++.h>
using namespace std;

int main(){
    int a, count = 0;
    cin >> a;
    while (a != 0 && a != 6174){
        string sa = to_string(a);
        string sb = sa;
        sort(sa.begin(), sa.end());
        sort(sb.begin(), sb.end(), greater<char>());
        a = stoi(sb) - stoi(sa);
        ++count;
    }
    cout << count;
    return 0;
}