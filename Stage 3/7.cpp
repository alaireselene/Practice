#include <bits/stdc++.h>
using namespace std;

bool check(const int &a){
    if (a == 1) return false;
    int count = 0;
    for (int i = 2; i <= sqrt(a); ++i){
        if (a % i == 0) ++count;
    }
    return count == 0;
}
int main(){
    int n; 
    cin >> n;
    vector <int> a(n);
    for (int i = 0; i < n; ++i) {
        int temp;
        cin >> temp;
        if (check(temp)) a[i] = temp; 
    }
    int count = 0;
    sort(a.begin(), a.end());
    for (int &item: a){
        cout << item << " ";
    }
    cout << endl;
    for (int i = 0; i < n - 1; ++i){
        if (a[i + 1] == a[i] + 2) ++count;
    }
    cout << count << endl;
    return 0;
}