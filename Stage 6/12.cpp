#include <bits/stdc++.h>
using namespace std;
#define loop(i, n) for (int i = 0; i < n; ++i)

vector <int> a, f;
/* a - day Input.
 * f - day tinh tong [0..k]
 */

int n, sum = 0, k = 2;
/* n - so phan tu
 * sum - tong cua day
 * 
 * Giai thich y tuong: Neu 1 day so co tong la
 * 'sum' thi tong cua cac day con se la uoc cua 'sum'.
 * k = 2 se la uoc nho nhat de xet.
 * Nhiem vu la tim max(k);
 */

/*  Duoi day la ham idx() co chuc nang danh dau cac vi
 *  tri de chia day 'a' thanh cac phan co tong bang nhau.
 *  */
map <int, bool> idx(){
    map <int, bool> foo;
    loop(i, n){
        if (sum % f[i] == 0){
            /* Neu sum[0..i] la uoc cua sum,
             * danh dau (true). Sau do mac dinh
             * day so chia lam 2 phan:
             * [0..i] va [++i..--n].
             * */
            foo[i] = true;
            k = 2;
            while (true){
                int it = lower_bound(f.begin(), f.end(), f[i] * k) - f.begin();
                /* it - vi tri tren f sao cho f[it] = f[i] * k;
                 * hay noi cach khac la vi tri de chia day
                 * thanh cac day con co tong bang nhau.
                 * Neu f[i] khong phai la uoc cua f[it],
                 * ++i;
                 * Nguoc lai, danh dau vi tri 'it'.
                 * */
                if (f[it] > f[i] * k) break;
                ++k;
                foo[it] = true;
                if (sum == f[it]) return foo;
            }
            foo.clear();
        }
        return foo;
    }
}

int main(){ // Driver code
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int x; // Bien nhap.

    cin >> n;
    loop(i, n){
        cin >> x;
        a.push_back(x);
        sum += x;
        f.push_back(sum);
    } // Ham nhap

    map <int, bool> index = idx();
    /*  Neu idx() chi co 1 vi tri duoc danh dau
     *  => vi tri cuoi => day khong chia.
     *  */
    if(index.size() == 1){
        for (auto &item:a) cout << item << ' ';
        cout << '\n';
    }
    /*  Nguoc lai, xet tu [0..--n]
     *  Tai cac vi tri duoc danh dau,
     *  in ra '\n' de phan tach day.
     *  */
    else{
        loop(i, n){
            cout << a[i] << ' ';
            if (index[i]) cout << '\n';
        }
    }
    cout << 'So lan chia: ' << k - 1;
    return 0;
}
