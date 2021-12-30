#include <iostream>

using namespace std;

int stantonMeasure(int a[ ], int len){
    int count = 0;
    for (int i=0; i<len; i++){
        if(a[i] == 1){
            count ++;
        }
    }
    int occur = 0;
    for (int i=0; i<len; i++){
        if(a[i] == count){
            occur++;
        }
    }
    return occur;

}

int main(){
    int a[] = {1, 3, 1, 1, 3, 3, 2, 3, 3, 3, 4};
    int len = sizeof(a)/sizeof(a[0]);
    cout << stantonMeasure(a, len) << endl;
    return 0;
}