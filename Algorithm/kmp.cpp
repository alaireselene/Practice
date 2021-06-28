// To practise KMP, I must re-write it.
#include <bits/stdc++.h>
using namespace std;

void lps_add(char *pat, int len, int *lps);

void kmp_search(char *txt, char *pat){
    // Get size of text and pattern string
    int M = strlen(txt);
    int N = strlen(pat);
    // Create LPS table for pattern with N is length of pattern;
    int lps[N];
    // Fill value into LPS table
    lps_add(pat, N, lps);
    // Create index for txt(i) and pat(j)
    int i = 0, j = 0;
    while (i < M){ // Start from 0;
        if (txt[i] == pat[j]){
            ++i;
            ++j;
        }
        if (j == N){ // j == N, all char of pattern is checked
            // i - j because j can be reseted.
            cout << "GOTCHA! Catch a pokemon in pos " << i - j << "\n";
            // Explain: an array with size 5 have the last value in position  5 - 1 = 4
            // So we get the value of lps[j - 1] for j to jump into next pos without re-check last values;
            j = lps[j - 1];
        }
        else{// j != N, mismatch after j char
            if (i < M && pat[j] != txt[i]){
                if (j != 0) j = lps[j - 1];
                else ++i;
            }
        } 
    }
}

void lps_add(char *pat, int N, int *lps){
    int len = 0; // This variable is used to memorize the length of prefix - suffix a.k.a LPS value.
    int i = 1; // The start position to conpare is always 1.
    lps[0] = 0; // in position 0, there is 0 prefix - suffix
    while (i < N)
    {
        // Example abaaba, longest prefix - suffix is ab, len = 2, i = 4 (we're in pos 4), pat[i] = pat[len]
        if (pat[i] == pat[len]){
            ++len; // Yeah, the value is go up
            lps[i] = len; // Write this into LPS Table
            ++i; // And check the next position
        }
        else{
            if (len != 0){ // Oh yeah
                len = lps[len - 1];
                /* Explain:
                Example: aabbaabbaabc;
                Due to last check, len = 3 (because 3 + 1 from last sucessful check).
                i = posittion(c).
                More explaination:
                LPS is now like that 0 1 0 0 1 2 3 4 1 2 3.
                In that step len = 3 is written into LPS table and i is in pos(c);
                Then the algo see a bit different, and we can't
                increase the value so it go back to len[3 - 1] = len[2] = 0. 
                Now you see, there is no prefix - suffix.
                */
            }
            else { // When len = 0
                lps[i] = len; // Yes, write this into LPS table now.
                // As you see, i is the current position to check.
                ++i; // And increase i to check the next position.
            }
        }
    }    
}

int main(){
    char txt[] = "ABABDABACDABABCABAB";
    char pat[] = "ABABCABAB";
    kmp_search(txt, pat);
    return 0;
}
