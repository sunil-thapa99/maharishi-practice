#include <iostream>

using namespace std;

int isDivisible(int a[ ], int len, int divisor){
    for (int i=0; i<len; i++){
        if (a[i]%divisor != 0){
            return 0;
        }
    }
    return 1;
}

int main(){
    int a[] = {6, 12, 24, 36};
    int len = sizeof(a)/sizeof(a[0]);

    cout << isDivisible(a, len, 12) << endl;
    return 0;
}