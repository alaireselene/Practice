#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector <long long> a(n);
    for (int i = 0; i < n; ++i){
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    int count = 1, max_rep = 0, temp = a[i];
    // count : Number of different item;
    // max_rep: maximum time of repeating.
    int trep = 0;
    for (int i = 1; i < n; ++i){
        if (temp == a[i]){
            ++trep;
        }
        else {
            ++count;
            if (trep > max_rep){
                max_rep = trep;
                trep = 0;
            }
        }
    }
    cout << count << ' ' << max_rep << '\n';
    return 0;
}
