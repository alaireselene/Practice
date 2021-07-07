#include <bits/stdc++.h>
using namespace std;

vector <int> in, temp;

bool is_mirror(int l, int r){
    for (; l <= r; ++l, --r){
        if(in[l] != in[r]) return false;
    }
    return true;
}

void work(){
    int pos = in.size() - 1;
    for (int i = 0; i < in.size(); ++i){
        if(!is_mirror(i, pos)) temp.push_back(in[i]);
        else break;
    }
    for (int &item:in) cout << item << '\t';
    for (int i = temp.size() - 1; i >= 0; --i) cout << temp[i] << '\t';
    cout << '\n';
}
int main(){
    int k, x;
    cin >> k;
    for (int i = 0; i < k; ++i){
        cin >> x;
        in.push_back(x);
    }
    work();
    return 0;
}