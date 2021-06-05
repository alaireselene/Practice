#include <bits/stdc++.h>
using namespace std;

int main(){
    /* DOC:
    Thuat toan su dung: Tu 1 den n co:
    - n / 5  so chia het cho 5
    - (n - 1) / 5 + 1 so chia 5 du 1
    - (n - 2) / 5 + 1 so chia 5 du 2
    - (n - 3) / 5 + 1 so chia 5 du 3
    - (n - 4) / 5 + 1 so chia 5 du 4
    */
   int a, b;
   cin >> a >> b;
   int aa[5], ab[5];
   aa[0] = a / 5;
   ab[0] = b / 5;
   /* Thuc ra ban dau count = 0 nhung
   vong for ben duoi chay tu 1 nen de
   gop code vao thi count phai bat 
   dau luon tu aa[0] * ab[0] */
   int count = aa[0] * ab[0];
   for (int i = 1; i < 5; ++i){
       aa[i] = (a - i) / 5 + 1;
       ab[i] = (b - 5 + i) / 5 + 1;
       /* Voi n so chia 5 du x 
       va m so chia 5 du (5 - x)
       co m * n cach chon */
       count += (ab[i] * aa[i]);
   }
   cout << count << endl;
   return 0;
}