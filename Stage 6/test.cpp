#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i){
        for (int k = 0; i < n; ++i){
            cout << i << '\t' << k << endl;
        }
    }
    return 0;
}