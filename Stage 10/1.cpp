#include <bits/stdc++.h>
using namespace std;

int main() {
    freopen("VATSUA.INP", "r", stdin);
    freopen("VATSUA.OUT", "w", stdout);
    int cow, total_milk = 0;
    cin >> cow;
    vector<int> milk_list(cow);
    for (auto &milk:milk_list)
        cin >> milk;

    sort(milk_list.rbegin(), 
         milk_list.rend());

    for (int i = 0; i < cow; ++i){
        if (milk_list.at(i) - i == 0)
            break;
        else {
            total_milk += (milk_list.at(i) - i);
        }
    }
    cout << total_milk << '\n';
    return 0;
}
