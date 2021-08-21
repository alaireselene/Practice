#include <bits/stdc++.h>
using namespace std;

uint64_t ans = 1;
vector<size_t> top;
size_t a, n; 
int main(){
    cin >> a >> n;
    while (n > 0){
        top.push_back(n);
        n /= 2;
    }
    for (int i = top.size() - 1; i >= 0; --i){
        if (top[i] % 2 != 0) ans = ans * ans * a;
        else ans = ans * ans;
    }
    cout << ans << '\n';
}
