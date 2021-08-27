/* 
 * Author:  Sena Alaire from EdenProject
 *          truongsondotcom@gmail.com
 * Task:    "13.cpp"
 * Created: 27/08/2021
 * */

#include <bits/stdc++.h>
using namespace std;
typedef long long int li;
typedef long double ld;

#define Random(lf, rt) (lf + rand() % (rt - lf + 1))
#define Time   cerr << "Time collapse : " << fixed << setprecision(3) << 1.000*clock()/CLOCKS_PER_SEC
#define pb push_back
#define all(z) z.begin(), z.end()
#define rall(z) z.rbegin(), z.rend()
#define ii pair<int, int>
#define sz(z) (int) z.size()
#define f first
#define s second
#define FOR(i, a, b) for(li i = a; i < b; i++)
#define TASK "TRIANGLE"

vector <li> a, b, c;
li n, x, d = 0;

int main(){
    freopen(TASK".INP", "r", stdin);
    freopen(TASK".OUT", "w", stdout);

    cin >> n;
    FOR (i, 0, n) {
        cin >> x;
        a.pb(x);
    }
    sort(all(a));
    FOR (i, 0, n) {
        cin >> x;
        b.pb(x);
    }
    FOR (i, 0, n) {
        cin >> x;
        c.pb(x);
    }

    FOR (i, 0, n) { // b
        FOR (k, 0, n) { // c
            auto iter_l = upper_bound(all(a), abs(b[i] - c[k]));
            auto iter_r = upper_bound(rall(a), b[i] + c[k], greater<int>());
            if (iter_l == a.end() || iter_r == a.rend()) continue;
            else {
            	li l = iter_l - a.begin();
            	li r = a.size() - 1 - (iter_r - a.rbegin());
            	d += (r - l + 1);
            }
        }
    }

    cout << d << '\n';
    return 0;
}
