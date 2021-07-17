#include <bits/stdc++.h>
using namespace std;

int main(){
    vector <long long> in;
    fstream FIN, FOUT;
    FIN.open("INSUL.INP", stdin);
    FOUT.open("INSUL.OUT", stdout);
    int n;
    cin >> n;
    long long temp;
    for (int i = 0; i < n; ++i){
        cin >> temp;
        in.push_back(temp);
    }
    sort(in.begin(), in.end());
    if (n % 2 == 0){
        temp = 0;
        for (int i = n / 2; i < n; ++i){
            temp += 2 * in[i];
        }
    }
    else{
        temp = a[n / 2];
        for (int i = n / 2 + 1; i < n; ++i){
            temp += 2 * in[i];
        }
    }
    cout << temp;
INSUL.OUT
    return 0;
}
