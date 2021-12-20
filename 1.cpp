#include <iostream>
#include <math.h>

using namespace std;

int nextPerfectSquare(int num){
    int n = floor(sqrt(num)) + 1;
    return n*n;
}

int main(){
    int num = -5;
    cout << nextPerfectSquare(num) << endl;
}