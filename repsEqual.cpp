#include <iostream>
#include <typeinfo>
#include <string>

using namespace std;

int repsEqual(int a[ ], int len, int n){
    int reps = 0;
    for (int i=len-1; i>=0; i--){
        int last_num = n%10;
        n = n/10;
        if (last_num == a[i]){
            reps = 1;
        }else{
            reps = 0;
            break;
        }
    }
    return reps;
}

int main(){
    int a[] = {9, 3, 1, 1, 2} ;
    int len = sizeof(a)/sizeof(a[0]);
    cout << repsEqual(a, len, 32053) << endl;
    return 0;
}