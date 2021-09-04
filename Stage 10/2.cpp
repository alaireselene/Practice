#include <bits/stdc++.h>
using namespace std;

struct CarInfo {
    int name;
    int fine;
    int fix_time;
};

bool best_arrange (CarInfo &a, 
                   CarInfo &b) {
    double a_value = double(a.fine) /
                     double(a.fix_time);
    double b_value = double(b.fine) /
                     double(b.fix_time);
    return a_value < b_value;

}

int main() {
    freopen("Suaxe.inp", "r", stdin);
    freopen("Suaxe.out", "w", stdout);
    int n, set_name = 1, day = 0, total_fine = 0;
    cin >>n;
    vector<CarInfo> car(n);
    for (auto &item:car) {
        item.name = set_name++;
        cin >> item.fine;
    }
    for (auto &item:car) {
        cin >> item.fix_time;
    }
    sort(car.rbegin(), car.rend(), best_arrange);
    
    for (auto &item:car) {
        day += item.fix_time;
        total_fine += day * item.fine;
    }
    cout << total_fine << '\n';

    for (auto &item:car) {
        cout << item.name << ' ';
    }
    cout << '\n';
    return 0;
}
