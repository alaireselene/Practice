#include <bits/stdc++.h>
using namespace std;

int n, s = 0;
vector<pair<int, int>> p;

bool isTrue(pair<int, int> x, pair<int, int> y){
    return float(x.first / x.second) > float(y.first / y.second);
}

int main(){
    cin >> n;
    for (int i = 0, x, y; i < n; ++i){
        cin >> x >> y;
        p.push_back(make_pair(x, y));
    }
    sort(p.begin(), p.end(), isTrue);

    int temp = p[0].first;
    s = p[0].first * p[0].second;
    for (int i = 1; i < n; ++i){
        temp += p[i].first;
        s += (temp * p[i].second);
    }
    cout << s;
    return 0;
}
