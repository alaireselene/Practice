#include<bits/stdc++.h>

using namespace std;

int n, c = 0, _max = -1;

int main (){
    cin >> n;
    vector<int> a(n);
    for (int &it:a) cin >> it;
    for (int i = 2; i < n; ++i){
        if (a[i] == (a[i - 1] + a[i - 2])) {
        	++c;
        	_max = max(c + 2, _max);
        }
        else if (c != 0) c = 0;
    }
    cout << _max;
}