#include <bits/stdc++.h>
using namespace std;

void lps_add(const string &pat, int N, int *lps);

int kmp_search(const string &txt, const string &pat){
    int count = 0;
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
            ++count;
            j = lps[j - 1];
        }
        else{
            if (pat[j] != txt[i]){
                if (j != 0) j = lps[j - 1];
                else ++i;
            }
        } 
    }
    return count;
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
    string a; // = "THPT Cam Giang huyen Cam Giang";
    getline(cin, a);
    cin.ignore();
    string b; // = "Cam"
    getline(cin, b);
    cin.ignore();
    int count = 0;
    for (int i = 0; i < a.length(); ++i){
        if (a[i] == ' '){
            if(i == 0 || i == a.length() - 1){
                continue;
            } 
            else ++count;
        }
    }
    cout << count + 1 << endl << kmp_search(a, b);
}
