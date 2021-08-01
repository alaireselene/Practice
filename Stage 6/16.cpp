#include <bits/stdc++.h>
using namespace std;

#define loop(i, start, last) for (int i = start; i <= last; ++i)
#define pub push_back

vector <long long> x;
vector <long long> a;
int n;

bool canStart(const int &i){
    int foo = x[i];
    for(int j =  i + 1; j <= i + n; ++j){
        foo -= a[j - 1];
        if (foo < 0) return 0;
        foo += x[j];
    }
    if (foo < 0) return 0;
    return 1;
}

int main(){
    cin >> n;
    int k; // Input
    loop(i, 0, n - 1){
        cin >> k;
        x.pub(k);
    }
    loop(i, 0, n - 1){
        cin >> k;
        a.pub(k);
    }
    loop(i, 0, n - 1){
        x.pub(x[i]);
        a.pub(a[i]);
    }
    loop(i, 0, n - 1){
        if (canStart(i)){
            cout << i + 1 << '\n';
        }
    }
    return 0;
}
