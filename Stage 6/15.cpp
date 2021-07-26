#include <bits/stdc++.h>
using namespace std;

vector <long long> ftr;
vector <pair<int, int>> idx;
// Generate factorial;
long long n;

int main(){
    cin >> n;
    ftr.push_back(1);
    ftr.push_back(1);
    for (int i = 2; ftr.back() <= n; ++i){
        ftr.push_back(ftr.back() * i);
    }
    while (n > 0){
        int i = lower_bound(ftr.begin(), ftr.end(), n) - ftr.begin();
        if (ftr[i] > n) --i;
        if (i == 0) ++i;
        int mark = n / ftr[i];
        idx.push_back(make_pair(i, mark);
        n -= (mark * ftr[i]);
    }
    for (int i = ftr.size() - 1; i >= 0; --i){
        cout << "D[" << idx[i].first << "] = " idx[i].second << " * " ftr[idx[i].first] << " = " ftr[idx[i].first] * (idx[i].second) << '\n';
    }
    return 0;
}
