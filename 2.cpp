#include <iostream>
#include <math.h>

using namespace std;

int nUpCount(int a[], int len, int n){
    int sum = 0;
    int count = 0;
    int prevSum = 0;
    for (int i=0; i<len; i++){
        prevSum = sum;
        sum += a[i];
        
        if (sum > n && prevSum <= n){
            count += 1;
        }
    }
    return count;
}

int main(){
    // int a[] = {2, 3, 1, -6, 8, -3, -1, 2};
    // int a[] = {6, 3, 1};
    int a[] = {1, 2, -1, 5, 3, 2, -3};
    int len = sizeof(a)/sizeof(a[0]);
    cout << nUpCount(a, len, 20) << endl;
}