#include <bits/stdc++.h>
using namespace std;

int n;
vector <int> a;

bool isTrue(int k){
    vector <int> foo = a;
    while (true){
        int i = lower_bound(foo.begin(), foo.end(), k) - foo.begin();
        if (i == foo.size()) --i;
        if (foo[i] > k) --i;
        k -= foo[i];
        if (k == 0) return 0;
        else if (i == 0) return 1;
        foo.erase(foo.begin() + i);
        if (foo.size() == 0 && k != 0) return true;
    }
}

int main(){
    // inp for input number;
    // n - number of items.
    cin >> n;

    for (int i = 0, inp; i < n; ++i){
        cin >> inp;
        a.push_back(inp);
    }
    sort(a.begin(), a.end());
    int i = a.front();
    while (!isTrue(i)) ++i;
    cout << i;
    return 0;
}
