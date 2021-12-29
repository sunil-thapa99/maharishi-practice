#include <iostream>

using namespace std;

int isGuthrieSequence(int a[ ], int len){
    if (a[len-1] != 1 || a[0]<=0){
        return 0;
    }
    int temp = 0;
    for (int i=0; i<len-1; i++){
        temp = a[i];
        if(temp%2==0){
            temp /= 2;
        }else{
            temp = temp*3+1;
        }
        if (temp != a[i+1]){
            return 0;
        }
    }
    return 1;
}

int main(){
    int a[] = {8, 4, 2};
    int len = sizeof(a)/sizeof(a[0]);
    cout << isGuthrieSequence(a, len) << endl;
}