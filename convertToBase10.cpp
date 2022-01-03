#include <iostream>
#include <math.h>

using namespace std;

int convertToBase10(int a[], int len, int base){
    int base_value = 0;
    for (int i=0; i<len; i++){
        if (a[i] >= base){
            base_value = -1;
            break;
        }
        base_value += a[i]*pow(base, len-i-1);
    }
    return base_value;
}

int main(){
    int a[] = {3, 7, 1} ;
    int len = sizeof(a)/sizeof(a[0]);

    cout << convertToBase10(a, len, 6) << endl;
    return 0;
}