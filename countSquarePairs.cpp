#include <iostream>
#include <math.h>

using namespace std;

int isPerfectSquare(int val){
    int square = sqrt(val);
    return (square*square == val);
}

int countSquarePairs(int a[ ], int len){
    if (len == 1){
        return 0;
    }
    int x=0,y=0, count=0;
    for (int i=0; i<len; i++){
        x = a[i];
        for (int j=0; j<len; j++){
            y = a[j];
            if (x == y){
                continue;
            }
            int val = x+y;
            if ((x>=y) || (x <= 0) || (y <= 0)){
                continue;
            }else{
                if(isPerfectSquare(val)){
                    count++;
                }
            }
        }
    }
    return count;
}

int main(){
    int a[] = {9};
    int len = sizeof(a)/sizeof(a[0]);
    cout << countSquarePairs(a, len) << endl;
}