#include <bits/stdc++.h>
#define loop(i, start, last) for(int i = start; i < last; ++i)
using namespace std;

int n, sum = 0;
vector <pair<int, int>> in;

bool isTrue(pair<int, int> x, pair<int, int> y){
    if (x.first - x.second < y.first - y.second) return 1;
    return 0;
}

int main(){
    freopen("GIFT.INP", 'r', stdin);
    freopen("GIFT.OUT", 'w', stdout);
    
    cin >> n;
    loop(i, 0, n - 1){
        int x, y;
        cin >> x >> y;
        in.push_back(make_pair(x, y));
    }

    sort(in.begin(), in.end(), isTrue);
    loop(i, 0, n / 2) sum += in[i].second;
    loop(i, n / 2, n) sum += in[i].first;
    cout << sum;
    return 0;
}
