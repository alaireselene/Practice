#include <bits/stdc++.h>
using namespace std;

// Khai bao cho do phai viet lai.
string numUpper[10] = {"Khong", "Mot", "Hai", "Ba", "Bon", "Nam", "Sau", "Bay", "Tam", "Chin"};
string numLower[10] = {"\0", "mot", "hai", "ba", "bon", "nam", "sau", "bay", "tam", "chin"};

int main(){
    int n; // = 44, Vi du
    cin >> n;
    string a = to_string(n); // Chuyen ve string xu ly
    // Voi n co 1 chu so:
    if (a.length() == 1){
        cout << numUpper[a[0] - '0'];
    }

    // Voi n co 2 chu so;
    else if (a.length() == 2){
        // Xet ngoai le cua hang chuc.
        // Voi so co dang 10, 11, ...
        if (a[0] == '1') cout << "Muoi ";
        // Voi cac so con lai
        else cout << numUpper[a[0] - '0'] << " muoi ";
        // Xet ngoai le cua hang don vi
        // Voi cac so 15, 25
        if (a[1] == '5') cout << "lam";
        else {
            if (a[1] != '4') cout << numLower[a[1] - '0'];
            // Voi cac so 14, 24
            else{
                if (a[0] == '1') cout << numLower[4];
                else cout << "tu";
            }
        }
    }

    // Voi so co 3 chu so
    else{
        cout << numUpper[a[0] - '0'] << " tram ";
        // Xet ngoai le cua hang chuc
        // Voi cac so 100, 203, ...
        if (a[1] == '0')
        {
            if (a[2] != '0') cout << "linh " << numLower[a[2] - '0'];
        }
        // Voi cac so con lai
        else
        {
            // Voi cac so 414, 312, ...
            if (a[1] == '1') cout << "muoi ";
            // Voi cac so con lai
            else cout << numLower[a[1] - '0'] << " muoi ";
            // Xet ngoai le cua hang don vi
            // Voi cac so 315, 875, ...
            if (a[2] == '5') cout << "lam";
            else {
                if (a[2] != '4') cout << numLower[a[2] - '0'];
                // Voi cac so 14, 24
                else{
                    if (a[1] == '1') cout << numLower[4];
                    else cout << "tu";
                }
            }
        }
    }
    return 0;
}