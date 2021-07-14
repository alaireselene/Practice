#include <bits/stdc++.h>
using namespace std;

vector <long long> a;
int n, len, pos;
// n - size of array.
// len - len of max.
// pos - pos of 1st position.

long long x, sum = 0;
// x - input.
// sum - answer.
// Never let sum = 0, if the answer is -1 lmao;

void inp(){
    cin >> n;
    for (int i = 0; i < n; ++i){
        cin >> x;
        a. push_back(x);
    }
}

long long compare(const long long &a, const long long &b){
    if (a > b) return a;
    else return b;
}
void work(){
    sum = a[0];
    for (int i = 0; i < n; ++i){ // Check out every number;
        long long temp = 0;
        for (int k = 0; k < n - i; ++k){
            temp += a[i + k];
            if (temp > sum) {
                pos = i;
                len = k;
                sum = temp;
            }
        }
    }
}

int main(){
    inp();
    work();
    cout << pos << ' ' << pos + len << ' ' << sum << '\n';
    return 0;
}