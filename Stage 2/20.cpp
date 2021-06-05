#include <bits/stdc++.h>
using namespace std;
// Dang nhe ra bai nay dung Segment Tree / Binary Tree

int main(){
    int m, n;
    cin >> m >> n;
    int a[n], b[m];
    for (int i = 0; i < n; ++i){
        cin >> a[i];
    }
    for (int i = 0; i < m; ++i){
        cin >> b[i];
    }
    int count = 0;
    // O(n ^ 2), how ugly is this code?
    for (int i = 0; i < n; ++i){
        if (a[i] < b[1]) ++count;
    }
    cout << count << " ";
    for (int i = 1; i < m - 1; ++i){
        count = 0;
        for (int k = 0; i < n; ++i){
            if (a[k] >= b[i] && a[k] <= b[i + 1]) ++count;
        }
        cout << count << " ";
    }
    count = 0;
    for (int i = 0; i < n; ++i){
        if (a[i] >= b[m - 1]) ++count;
    }
    cout << count << endl;
}