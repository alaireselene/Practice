#include <bits/stdc++.h>
using namespace std;

int main(){
    long long sum_arr = 0, inp;
    // Get value of sum of array;
    // inp for input number;
    vector <long long> a;
    int n;
    // n - number of items.
    cin >> n;


    for (int i = 0; i < n; ++i){
        cin >> inp;
        a.push_back(inp);
        sum_arr += inp;
    }
    sort(a.begin(), a.end());
    for (int i = a[0] + 1; i <= sum_arr + 1; ++i){
        int pos = 
    }
    return 0;
}
