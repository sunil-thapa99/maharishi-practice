#include <iostream>

using namespace std;

int isLegalNumber(int a[ ], int len, int base){
    int is_legal = 1;
    for (int i=0; i<len; i++){
        if (a[i] >= base){
            is_legal = 0;
            break;
        }
    }
    return is_legal;
}

int main(){
    int a[] = {3, 7, 1};
    int len = sizeof(a)/sizeof(a[0]);

    cout << isLegalNumber(a, len, 6) << endl;
    return 0;
}