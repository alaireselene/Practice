#include <bits/stdc++.h>
using namespace std;

void lps_add(const string &pat, int N, int *lps);

void kmp_search(const string &txt, const string &pat){
    int M = txt.length();
    int N = pat.length();
    int lps[N];
    lps_add(pat, N, lps);
    int i = 0, j = 0;
    while (i < M){ 
        if (txt[i] == pat[j]){
            ++i;
            ++j;
        }
        if (j == N){
            cout << i - j << " ";
            j = lps[j - 1];
        }
        else{
            if (pat[j] != txt[i]){
                if (j != 0) j = lps[j - 1];
                else ++i;
            }
        } 
    }
    cout << endl;
}

void lps_add(const string &pat, int N, int *lps){
    int len = 0;
    int i = 1; 
    lps[0] = 0;
    while (i < N)
    {
        if (pat[i] == pat[len]){
            ++len;
            lps[i] = len;
            ++i;
        }
        else{
            if (len != 0){
                len = lps[len - 1];
            }
            else { 
                lps[i] = len;
                ++i;
            }
        }
    }    
}

int main(){
    string a;
    getline(cin, a);
    cin.ignore();
    string b;
    getline(cin, b);
    cin.ignore();
    kmp_search(a, b);
    return 0;
}
