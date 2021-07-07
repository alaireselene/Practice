#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, pos, len = 0, comp = 0;
    // Do dai mac dinh la 0.
    // Bien comp dung de so sanh do dai
    cin >> n;
    float a[n], in;
    for (float &item:a) cin >> item;
    cin >> in;
    for (int i = 0; i < n - 1; ++i){
        if (a[i] > in) ++len;
        else len = 0;
        if (len > comp){
            comp = len;
            pos = i;
        }

    }
    if (comp == 0) cout << "Khong co so nao lon hon " << in;
    else cout << "Day Max tu " << pos + 1 - comp << " den " << pos << "\n";
    return 0;
}