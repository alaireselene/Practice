#include <bits/stdc++.h>
using namespace std;

int n;

int main(){
    freopen("Labai.INP", "r", stdin);
    freopen("Labai.OUT", "w", stdout);
    cin >> n;

    set <size_t> in(n);
    for (size_t i = 0, x; i < n; ++i){
        cin >> x;
        in.insert(x);
    }
    cout << in.size() << '\n';
    for (auto &item:in) cout << item << ' ';
    cout << '\n';
    return 0;
}
