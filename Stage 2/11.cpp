#include <bits/stdc++.h>
using namespace std;

int main(){
    string a;
    vector<int> b;
    cin >> a;
    int count = 0;
    for (int i = 0; i < a.length(); ++i){
        if(a[i] == 'e'){
            ++count;
        }
        else{
            b.push_back(count);
            count = 0;
        }
    }
    sort(b.rbegin(), b.rend());
    cout << b[0] << endl;
    for (int i = 0; i < b[0]; ++i) cout << 'e';
    cout << endl;
    return 0;
}