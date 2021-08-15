#include <iostream>
using namespace std;

int main(){
    string in;
    cin >> in;
    int l = 0, r = in.size() - 1, ans = -1;
    int mid = (r - l) / 2;
    while (l <= r){
        if(in[mid] == '1') r = mid - 1;
        else l = mid + 1;
        mid = (r + l) / 2;
        ans = mid;
    }
    cout << ans + 1;
}
