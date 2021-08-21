/*  Undone  */
#include <bits/stdc++.h>
using namespace std;

vector <long long> pos;
int p, c; // point, cow
long long x, lo, hi, mid; // input

bool isTrue(const int &k){
    int count = 0;
    for (int i = 1; i < p; ++i){
        if (pos[i] - pos[i - 1] >= k) ++count;
    }
    return count >= c;
}

int main(){
    cin >> p >> c;
    for (int i = 0; i < p; ++i){
        cin >> x;
        pos.push_back(x);
    }
    sort(pos.begin(), pos.end());
    lo = 2, hi = (*max_element(pos.begin(), pos.end())) - (*min_element(pos.begin(), pos.end()));
    while (lo <= hi){
        mid = lo + (hi - lo) / 2;
        if (isTrue(mid)) lo = mid + 1;
        else hi = mid - 1;
    }
    cout << lo << '\t' << mid << '\t' << hi << '\n'; 
}
