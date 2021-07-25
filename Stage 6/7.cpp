#include <bits/stdc++.h>
using namespace std;

vector <char> ch;
int n, cnt = 0; // n - so phan tu, cnt - so lan bien doi;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;
    for (pair <int, char> p = make_pair(0, 'x'); p.first < n; ++(p.first){
        cin >> p.second;
        ch.push_back(p.second);
    }

    for (int i = 0, c = n - 1; i <= c; ++i, c = n - 1){
    /* Giai thich: i - bien de duyet phan tu.
     * c - duyet tu cuoi len dau.
     * neu i >= c thi tuc la da xong 1 luot sap xep.
     * Nguoc lai, trong qua trinh duyet i, gap X tu
     * dong bo qua khong sap xep.
     * Voi 2 truong hop do va vang: Duyet tu cuoi len bang bien c.
     * - Gap V: bo qua. Neu gap phan tu khac V, lap tuc swap.
     * - Gap D: bo qua. Dap V cung bo qua vi V da duoc sap xep. Neu gap
     *   phan tu khac V va D, lap tuc swap.
     * */
        if (ch[i] == 'X'){
            while (ch[i] == 'X') ++i;
        }
        if (ch[i] == 'V'){
            while (ch[i] == 'V') --c;
            if (c <= i) break;
            swap(ch[c], ch[i]);
            ++cnt;
            for (auto &item:ch) cout << item << ' ';
        }
        if (ch[i] == 'D'){
            while (ch[c] == 'V') --c;
            while (ch[c] == 'D') --c;
            if (c <= i) break;
            swap(ch[c], ch[i]);
            ++cnt;
            for (auto &item:ch) cout << item << ' ';
          }
    }
    if (cnt == 0) for (auto &item:ch) cout << item << ' ';
    cout << '\n' << t << '\n';
    return 0;
}
