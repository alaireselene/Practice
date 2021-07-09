#include <bits/stdc++.h>
using namespace std;

int main(){
    vector <int> n;
    int k, num;
    cin >> k;
    for (int i = 0; i < k; ++i){
        cin >> num;
        n.push_back(num);
    }
    sort(n.begin(), n.end());
    for (int i = 0; i < k - 1; ++i){
        if (n[i] % 10 == 0 && n[i] != 0) continue;
        else{
            int t1 = n[i] / 10, t2 = n[i + 1] / 10;
            while (t1 <= t2){
                cout << t1 * 10 << ' ';
                ++t1;
            }
        }
    }
    return 0;
}