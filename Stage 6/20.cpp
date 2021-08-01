#include <bits/stdc++.h>
using namespace std;

int n, foo;
vector <int> in;

int main(){
    freopen("INSUL.INP","r", stdin);
    freopen("INSUL.OUT", "w", stdout);

    cin >> n;

    for (int i = 0; i < n; ++i){
        cin >> foo;
        in.push_back(foo);
    }
    sort(in.begin(), in.end());

    foo = 0;
    int i = (n >> 1) + (n & 1);
    /* Bit Operator:
     * x >> n: Dich phai n bit -> x /= 2 ^ n.
     * n & 1: thuc hien phep AND giua n voi tung bit cua 1.
     * O day neu n % 2 = 0 thi n & 1 = 0 va nguoc lai
     * */
    while (i < n){
        foo += in[i++];
    }
    if (n & 1) foo += in[n >> 1];
    cout << foo;
    return 0;
}
