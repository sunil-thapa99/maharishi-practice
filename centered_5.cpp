#include <iostream>

using namespace std;

int isCentered15(int a[ ], int len){
    int lower_index = 0;
    int upper_index = 0;
    int sum = 0;
    if (len%2 == 0){
        lower_index = (len/2)-1;
        upper_index = (len/2);
    }else{
        lower_index = (len-1)/2;
        upper_index = lower_index;
    }
    while (lower_index >= 0 && upper_index < len){
        sum = 0;
        for (int i=lower_index; i<=upper_index; i++){
            sum += a[i];
        }
        if (sum == 15){
            return 1;
        }
        lower_index--;
        upper_index++;
    }
    
    return 0;
}

int main(){
    int a[] = {1, 1, 15 -1,-1};
    int len = sizeof(a)/sizeof(a[0]);

    cout << isCentered15(a, len) << endl;
    return 0;
}