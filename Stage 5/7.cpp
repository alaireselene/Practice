#include <bits/stdc++.h>
using namespace std;

void convert(const string &a, vector <int> &v){
    int len = a.length();
    for (int i = len - 1; i >= 0; --i){
        int count = 0;
        for (int k = 0; k < i; ++k){
            if (a[k] < a[i]) ++count;
        }
        v.push_back(count);
    }
}

int main(){
    string num = "264153";
    vector<int> ans;
    convert(num, ans);
    for (int i = 0; i < (int) ans.size(); ++i){
        cout << ans[i] << '\t';
    }
    cout << '\n';
    return 0;
}