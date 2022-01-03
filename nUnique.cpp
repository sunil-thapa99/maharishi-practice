#include <iostream>

using namespace std;

int isNUnique(int a[ ], int len, int n){
    int count = 0;
    
    for (int i=0; i<len; i++){
        for (int j=i; j<len; j++){
            if (a[i]+a[j] == n && i != j){
                count++;
            }
        }
    }
    if (count == 1){
        return 1;
    }
    return 0;
}

int main(){
    int a[] = {7} ;
    int len = sizeof(a)/sizeof(a[0]);

    cout << isNUnique(a, len, 4) << endl;
    return 0;
}