#include <iostream>
#include <cstring>
using namespace std;

int main(){
    string temp;
    const unsigned char ch[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};
    int a = 150;
    if (a == 0) temp = '0';
    while (a != 0){
        temp += ch[a % 16];
        a /= 16;
    }
    for (int i = temp.length() - 1; i >= 0; --i){
        cout << temp[i];
    }
    cout << endl;
    return 0;
    
}