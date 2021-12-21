#include <iostream>
#include <math.h>

using namespace std;

int findPrime(int num){
    if (num<=1){
        return 0;
    }
    for (int i=2; i<num; i++){
        if (num%i == 0){
            return 0;
        }
    }
    return 1;
}

int primeCount(int start, int end){
    int count = 0;
    for (int i=start; i<=end; i++){
        int num = findPrime(i);
        if (num){
            count ++;
        }
    }
    return count;
}

int main(){
    int start = -10;
    int end = 6;
    cout << primeCount(start, end) << endl;
}