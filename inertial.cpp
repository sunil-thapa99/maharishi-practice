#include <iostream>
#include <algorithm>

using namespace std;

int isIntertial(int a[], int len){
    int max_val = *max_element(a, a+len);
    if ((len == 1) || (max_val%2 != 0)){
        return 0;
    }
    int temp = 0;
    int count_odd = 0;
    for (int i=0; i<len; i++){
        temp = a[i];
        if (temp%2 == 0){
            continue;
        }else{
            ++count_odd;
            for(int j=0; j<len; j++){
                if (a[j]%2 == 0){
                    if ((temp > max_val) || ((temp < a[j]) && (a[j] != max_val))){
                        return 0;
                    }
                    
                }
            }
        }
    }
    if (count_odd == 0){
        return 0;
    }
    return 1;
}

int main(){
    int arry[] = {2, 4, 6, 8, 10};
    int len = sizeof(arry)/sizeof(arry[0]);
    cout << isIntertial(arry, len) << endl;
}