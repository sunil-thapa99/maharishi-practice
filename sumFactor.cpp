#include <iostream>

using namespace std;

int sumFactor(int a[], int len){
    int sum = 0; 
    int count = 0;
    for (int i=0; i<len; i++){
        sum += a[i];
    }
    for(int i=0; i<len; i++){
        if(a[i] == sum){
            count++;
        }
    }
    return count;
}

int main(){
    int a[] = {0, 0, 0};
    int len = sizeof(a)/sizeof(a[0]);
    cout << sumFactor(a, len) << endl;
    return 0;
}