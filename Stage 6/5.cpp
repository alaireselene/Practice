#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    vector <int> a;
    int p, k;
    cin >> k >> p;
    for (int i = 0, x; i < k; ++i){
        cin >> x;
        a.push_back(x);
    }
    for (int ip = --p; a.size() > 1; ip = (ip + 3) % a.size()){
        cout << a[ip] << ' ';
        a.erase(ip + a.begin());
    }
    cout << '\n' << a[0] << '\n';
    return 0;
}
