#include <bits/stdc++.h>
using namespace std;

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