#include <bits/stdc++.h>
using namespace std;

vector<bool> prime_sieve(50001, 1);
stack <int> number;
vector<int> answer;
int n, k;
string s;

void sieve_gen() {
    prime_sieve.at(0) = 0;
    prime_sieve.at(1) = 0;
    for (int i = 2; i * i <= 50000; ++i) {
        for (int k = i * i; k <= 50000; k += i) {
            prime_sieve.at(k) = 0;
        }
    }
}

int main() {
    cin >> n >> k;
    sieve_gen();
    for (int i = 2, count = 0; count < n; ++i) {
        if (prime_sieve.at(i)) {
            ++count;
            s += to_string(i);
        }
    }

    for (char &digit_char:s) {
        int digit = digit_char - '0';
        if (number.empty())
            number.push(digit);
        else {
            while (!number.empty() && digit > number.top() && k > 0) {
                number.pop();
                --k;
            }
            number.push(digit);
        }
    }

    while (k > 0 && !number.empty()) {
        number.pop();
        --k;
    }

    while (!number.empty()) {
        answer.push_back(number.top());
        number.pop();
    }

    for (int i = answer.size() - 1; i >= 0; --i)
        cout << answer.at(i);
    cout << '\n';
    return 0;
}
