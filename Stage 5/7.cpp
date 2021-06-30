#include <bits/stdc++.h>
using namespace std;

vector <int> convert(string &a){
    int count = 0;
    vector <int> ans;
    for (int i = a.length() - 1; i >= 0; --i){
        for (int k = 0; i < a.length() - 1; ++i){
            if (a[k] < a[i]) ++count;
        }
    }
}

int main(){
    string num = "264153";
    int n = num.length(), count = 0;
    int lps[n];
    lps[0] = 0;
    for (int i = 1; i < n; ++i){
        if (num[i] > num[i + 1]){
            lps[i] = count;
        }
    }
}