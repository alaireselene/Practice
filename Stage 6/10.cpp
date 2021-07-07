#include <bits/stdc++.h>
using namespace std;

int main(){
    int n = 12, pos, len = 0, comp = 0;
    // Do dai mac dinh la 0.
    // Bien comp dung de so sanh do dai
    float a[n] = {53, 94, 73, 66, 83, 12, 42, 50, 2, 78, 18, 64};
    for (int i = 0; i < n - 1; ++i){
        if (a[i] < a[i + 1]) ++len;
        else len = 0;
        if (len > comp){
            comp = len;
            pos = i;
        }

    }
    cout << pos << "\t" << comp << "\n";
    if (comp == 0) cout << "INVALID \n";
    else cout << "Day Max tu " << pos + 1 - comp << " den " << pos << "\n";
    return 0;
}